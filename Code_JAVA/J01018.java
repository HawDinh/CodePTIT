import java.util.Scanner;

public class J01018 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        String s = sc.nextLine();
        int sum = 0;
        
        if (s.length() < 3 && s.length() > 18) {
            System.out.println("NO");
            return;
        }

        for (int i = 0; i < s.length() - 1; i++) {
            int num1 = s.charAt(i) - '0';
            int num2 = s.charAt(i+1) - '0';
            if (Math.abs(num1 - num2) != 2) {
                System.out.println("NO");
                return;
            }
            sum += num1;
            if (i == s.length()-2) {
                sum += num2;
            }
        }
        
        if (sum % 10 == 0) {
            System.out.println("YES");
        }
        else System.out.println("NO");
    }

    public static void main(String[] args) {
        int T = sc.nextInt();
        sc.nextLine();
        while (T-- > 0) {
            testCase();
        }
    }
}
