import java.util.*;

public class LietKeVaDem {

    private static boolean isNonDecreasing(String number) {
        for (int i = 0; i < number.length() - 1; i++) {
            if (number.charAt(i) > number.charAt(i + 1)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map<String, Integer> countMap = new LinkedHashMap<>();

        while (true) {
            String line = sc.nextLine().trim();
            if (line.isEmpty()) {  // Nếu dòng trống, dừng nhập
                break;
            }
            String[] numbers = line.split("\\s+"); // Tách các số trong dòng

            for (String number : numbers) {
                if (isNonDecreasing(number)) {
                    countMap.put(number, countMap.getOrDefault(number, 0) + 1);
                }
            }
        }
        sc.close();

        List<Map.Entry<String, Integer>> entryList = new ArrayList<>(countMap.entrySet());
        
        entryList.sort((a, b) -> {
            int cmp = b.getValue().compareTo(a.getValue());
            if (cmp == 0) {
                return countMap.keySet().stream().toList().indexOf(a.getKey()) - countMap.keySet().stream().toList().indexOf(b.getKey());
            }
            return cmp;
        });

        for (Map.Entry<String, Integer> i : entryList) {
            System.out.println(i.getKey() + " " + i.getValue());
        }
    }
}
