import java.util.Scanner;

public class J01017 {
    
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        String s = sc.nextLine();
        
        for (int i = 0; i < s.length() - 1; i++) {
            int num1 = s.charAt(i) - '0';
            int num2 = s.charAt(i+1) - '0';
            if (Math.abs(num1 - num2) != 1) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }

    public static void main(String[] args) {
        int T = sc.nextInt();
        sc.nextLine();
        while (T-- > 0) {
            testCase();
        }
    }
}
