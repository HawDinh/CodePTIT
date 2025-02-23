import java.util.Scanner;

public class J01024 {
    public static Scanner sc = new Scanner(System.in);

    public static boolean check(int n) {
        while (n > 0) {
            int i =  n % 10;
            if (i != 0 && i != 1 && i != 2) {
                return false;
            }
            n /= 10;
        }
        return true;
    }

    public static void testCase() {
        int n = sc.nextInt();
        if (check(n)) {
            System.out.println("YES");
        }
        else System.out.println("NO");
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
        }
    }
}
