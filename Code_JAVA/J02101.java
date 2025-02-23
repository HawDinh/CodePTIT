import java.util.*;
public class J02101 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();
        int[][] a = new int[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        int dem = 0;
        int xuoi = 1;
        int i = 0, j = 0;
        while (dem < n * n) {
            System.out.print(a[i][j] + " ");
            ++dem;

            if (xuoi == 1) {
                ++j;
                if (j == n) {
                    j = n - 1;
                    ++i;
                    xuoi = 0;
                }
            }
            else {
                --j;
                if (j == -1) {
                    j = 0;
                    xuoi = 1;
                    ++i;
                }
            }
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            testCase();
        }
    }
}
