import java.util.*;
public class J01014 {

    public static Scanner sc = new Scanner(System.in);

    public static int nt(long n) {
        if (n < 2) return 0;
        for (int i = 2;  i <= Math.sqrt(n); i++) {
            if (n % i == 0) return 0;
        }
        return 1;
    }

    public static void testCase() {
        long N = sc.nextLong();
        long ans = 0;

        for (int i = 1;  i <= Math.sqrt(N); i++) {
            if (N % i == 0) {
                if (nt(N / i) == 1) {
                    System.out.println(N / i);
                    return;
                }
                if (nt(i) == 1) {
                    ans = i;
                }
            }
        }
        System.out.println(ans);
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
        }
    }
}

