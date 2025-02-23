import java.util.Scanner;

public class J01008 {
    public static Scanner sc = new Scanner(System.in);
    public static int cnt = 1;

    public static void testCase(){
        int n = sc.nextInt();
        int  m = n;

        System.out.printf("Test %d: ",cnt);
        
        if (n == 1) System.out.print("1(1)");

        for (int i = 2; i <= Math.sqrt(m); i++) {
            int dem = 0;
            while (n % i == 0) {
                ++dem;
                n /= i;
            }
            if (dem > 0) {
                System.out.printf("%d(%d) ", i, dem);
            }
        }
        if (n != 1) {
            System.out.println(n + "(1)");
        }
        else {
            System.out.println();
        }
        ++cnt;
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            testCase();
        }
    }
}
