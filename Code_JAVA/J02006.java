import java.util.Scanner;

public class J02006 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int m = sc.nextInt();
        int n = sc.nextInt();
        int[] a = new int[m];
        int[] b = new int[n];
        int[] c = new int[1000];

        for (int i = 0; i < m; i++) {
            a[i] = sc.nextInt();
            c[a[i]] = 1;
        }

        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
            c[b[i]] = 1;
        }

        for (int i = 0; i < 1000; i++) {
            if (c[i] == 1) {
                System.out.print(i + " ");
            }
        }
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
