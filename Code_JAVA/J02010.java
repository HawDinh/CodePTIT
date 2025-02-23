import java.util.*;

public class J02010 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();

        int[] a = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        
        for (int i = 0; i < n-1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            System.out.print("Buoc " + (i + 1) + ": ");

            for (int k = 0; k < n; k++) {
                System.out.print(a[k] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
