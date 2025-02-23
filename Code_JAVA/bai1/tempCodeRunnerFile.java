import java.util.Scanner;

public class Main {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int m = sc.nextInt();
        int n = sc.nextInt();
        int k = sc.nextInt() - 1;
        
        Matrix a = new Matrix(m, n);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int value = sc.nextInt();
                a.setVal(i, j, value);
            }
        }

        a.SortCol(k);

        System.out.println(a);
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
        }
    }
}
