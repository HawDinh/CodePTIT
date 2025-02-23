import java.util.Scanner;

public class J01009 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase(){
        int n = sc.nextInt();
        long ans = 0;
        for (int i = 1; i <= n; i++) {
            long tich = 1;
            for (int j = 1; j <= i;j++) {
                tich *= j;
            }
            ans += tich;
        }
        System.out.println(ans);
    }
    public static void main(String[] args) {
        int t = 1;
        while (t-- > 0) {
            testCase();
        }
    }
}
