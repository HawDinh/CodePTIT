import java.util.Scanner;

public class J01012 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase(){
       int N = sc.nextInt();
       int ans = 0;
       for (int i = 2; i <= Math.sqrt(N); i++) {
        if (N % i == 0) {
            int j = N / i;
            if (i % 2 == 0){
                ans++;
            }
            if (j % 2 == 0 && j != i){
                ans++;
            }
        }
       }
       if (N % 2 == 0) {
        ans++;
       }
       System.out.println(ans);
    }
    public static void main(String[] args) {
        long t = sc.nextLong();
        sc.nextLine();
        while (t-- > 0) {
            testCase();
        }
    }
}
