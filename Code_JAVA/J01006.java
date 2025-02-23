import java.util.Scanner;

public class J01006 {static long F[] = new long[100];

    public static void Ktao(){
        F[1]=1;
        F[2]=1;
        for (int i = 3; i <= 92; i++) {
            F[i] = F[i-1] + F[i-2];
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        Ktao();
        while (t > 0) {
            int n = sc.nextInt();
            System.out.println(F[n]);
            t--;
        }
    }
}
