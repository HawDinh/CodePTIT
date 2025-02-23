import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class J02007 {
    public static Scanner sc = new Scanner(System.in);

    public static int dem = 1;

    public static void testCase() {
        int n = sc.nextInt();
        int[] a = new int[n];
        Map <Integer, Integer> mp = new LinkedHashMap<>();
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            mp.put(a[i], mp.getOrDefault(a[i], 0) + 1);
        }

        System.out.println("Test " + dem + ":");

        for (Integer key : mp.keySet()) {
            System.out.println(key + " xuat hien " + mp.get(key) + " lan");
        }
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
            ++dem;
        }
    }
}
