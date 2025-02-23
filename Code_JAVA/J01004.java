import java.util.Scanner;

public class J01004 {
    public static int Check(int a) {
        if (a < 2) return 0;
        else {
            for (int i = 2; i <= Math.sqrt(a); i++) {
                if (a % i ==0) return 0;
            }
            return 1;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t>0){
            int n = sc.nextInt();
            if (Check(n) == 1) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
            t--;
        }
    }
}
