import java.util.Scanner;
    public class J01002 {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while (t>0) {
                Long N = sc.nextLong();
                Long ans = N*(N+1)/2;
                System.out.println(ans);
                t--;
            }
        }
}
