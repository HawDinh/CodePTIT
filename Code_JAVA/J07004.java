import java.io.File;
import java.io.FileNotFoundException;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class J07004 {
    public static void testCase() {
        try {
            Scanner sc = new Scanner(new File("DATA.in"));
            Map<Integer, Integer>  mp = new TreeMap<>();

            while (sc.hasNext()) {
                int n = sc.nextInt();
                mp.put(n,mp.getOrDefault(n, 0) + 1);
            }

            for (Map.Entry<Integer, Integer> i : mp.entrySet()) {
                System.out.println(i.getKey() + " " + i.getValue());
            }
            
        } catch (FileNotFoundException e) {
            System.out.println("File không tìm thấy: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        testCase(); 
    }
}
