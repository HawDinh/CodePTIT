import java.util.*;

public class J02014 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();   
        int[] a = new int[n];
        int sum_left = 0;
        int sum_right = 0;
        int ans = 1;

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            sum_right += a[i];
        }
        sum_right -= a[0];

        while (ans < n) {
            sum_left += a[ans-1];
            sum_right -= a[ans];
            if (sum_left == sum_right) {
                System.out.println(ans + 1);
                return;
            }
            else {
                ans++;
            }
        }
        System.out.println("-1");
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
        }
    }
}
