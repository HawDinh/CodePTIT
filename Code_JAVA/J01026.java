import java.util.Scanner;

public class J01026 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();
        if ((int)Math.sqrt(n) * (int)Math.sqrt(n) == n) {
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
