import java.util.Scanner;

public class J01013 {
    
    public static Scanner sc = new Scanner(System.in);
    public static long ans = 0;
    public static int MaxVal = (int) 2e6;
    public static int[] prime = new int[MaxVal + 1];

    public static void sang() {
        for (int i = 2; i * i <= MaxVal; i++) {
            if (prime[i] == 0) {
                for (int j = i; j <= MaxVal; j += i) {
                    if (prime[j] == 0) {
                        prime[j] = i;
                    }
                }
            }
        }
        for (int i = 2; i <= MaxVal; i++) {
            if (prime[i] == 0) {
                prime[i] = i;
            }
        }
    }

    public static void testCase() {
        int N = sc.nextInt();
        if (prime[N] == 0) {
            ans += N;
            return;
        }
        while (N != 1) {
            ans += prime[N];
            N /= prime[N];
        }
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        sc.nextLine(); 
        sang();
        while (t-- > 0) {
            testCase();
        }
        System.out.println(ans);
    }
}
