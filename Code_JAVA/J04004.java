import java.util.*;

public class J04004 {

    public static Scanner sc = new Scanner(System.in);

    public static long ucln(long a, long b) {
        while (b != 0) {
            long r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    public static void testCase() {
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();
        long d = sc.nextLong();

        long x = a * d + b * c;
        long y = b * d;

        long z = ucln(x, y);

        x /= z;
        y /= z;

        System.out.println(x + "/" + y);
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
