import java.util.*;

public class J03005 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        String[] a = sc.nextLine().trim().split("\\s+");

        for (int i = 1; i < a.length; i++) {
            System.out.print(a[i].substring(0,1).toUpperCase() + a[i].substring(1).toLowerCase());
            if (i != a.length - 1) {
                System.out.print(" ");
            }
        }
        System.out.printf(", %s",a[0].toUpperCase());
        System.out.println();
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        sc.nextLine();
        while (t-- > 0) {
            testCase();
        }
    }
}
