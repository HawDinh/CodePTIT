import java.util.*;
import java.util.HashSet;

public class b1 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();
        float[] a = new float[n];
        float sum = 0;
        int dem = 0;

        for (int i = 0;i<n;i++) {
            a[i] = sc.nextFloat();
        }
        Arrays.sort(a);

        for (int i = 1;i < n - 1; i++) {
        if (a[i] != a[0] && a[i] != a[n-1]) {
            sum += a[i];
            ++dem;
            }
        }
        System.out.printf("%.2f",sum/dem);
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}

/*
6
6.75 8 9.2 7.25 7.75 6.75
 */