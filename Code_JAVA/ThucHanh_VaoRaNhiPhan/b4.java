import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;

public class b4 {

    public static boolean[] sang(int max) {
        boolean[] isPrime = new boolean[max + 1];
        Arrays.fill(isPrime, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= max; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= max; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return isPrime;
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        boolean[] isPrime = sang(1000000);

        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
        ArrayList<Integer> list1 = (ArrayList<Integer>) in1.readObject();

        Set<Integer> set1 = new TreeSet<>(list1);

        List<Integer> primesInList1 = new ArrayList<>();

        for (int num : set1) {
            if (isPrime[num] && num > 100) {
                primesInList1.add(num);
            }
        }

        // Sắp xếp danh sách primesInList1
        Collections.sort(primesInList1);

        // Tìm các cặp số nguyên tố
        for (int n : primesInList1) {
            System.out.println(n);
        }
    }
}
