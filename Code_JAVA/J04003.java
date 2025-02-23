import java.util.*;

public class J04003 {

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
        long x = sc.nextLong();
        long y = sc.nextLong();

        long z = ucln(x,y);

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
