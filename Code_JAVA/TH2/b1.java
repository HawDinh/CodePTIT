import java.util.*;

public class b1 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();
        int m = sc.nextInt();
        Set <Integer> a = new TreeSet<>();
        Set <Integer> b = new TreeSet<>();

        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            a.add(x);
        }

        for (int i = 0; i < m; i++) {
            int y = sc.nextInt();
            b.add(y);
        }

        Set <Integer> c = new TreeSet<>(a);
        c.retainAll(b);

        Set <Integer> d = new TreeSet<>(a);
        d.removeAll(b);

        Set <Integer> e = new TreeSet<>(b);
        e.removeAll(a);

        for (Integer num : c) {
            System.out.print(num + " ");
        }
        System.out.println();

        for (Integer num : d) {
            System.out.print(num + " ");
        }
        System.out.println();

        for (Integer num : e) {
            System.out.print(num + " ");
        }
        System.out.println();

    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
