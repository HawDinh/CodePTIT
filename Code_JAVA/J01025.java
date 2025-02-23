import java.util.Arrays;
import java.util.Scanner;

public class J01025 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int[] x = new int[4];
        int[] y = new int[4];
        
        for (int i = 0; i < 4; i++) {
            x[i] = sc.nextInt();
            y[i] = sc.nextInt();
        }

        Arrays.sort(x);
        Arrays.sort(y);

        int canhHV = Math.max(x[3] - x[0], y[3] - y[0]);
        System.out.println(canhHV * canhHV);
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
