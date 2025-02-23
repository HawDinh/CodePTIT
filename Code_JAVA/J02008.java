import java.util.Scanner;

public class J02008 {
    public static Scanner sc = new Scanner(System.in);

    public static long gcd(long a, long b) {
        while (b != 0) {
            long c = b;
            b = a % b;
            a = c;
        }
        return a;
    }

    public static long lcm(long a, long b) {
        return a * b / gcd(a, b);
    }

    public static long ans(long n) {
        long x = 1;
        for (long i = 2; i <= n; i++) {
            x = lcm(x, i);
        }
        return x;
    }

    public static void testCase() {
        long n = sc.nextInt();
        System.out.println(ans(n));
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
        }
    }
}
