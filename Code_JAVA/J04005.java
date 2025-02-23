import java.util.*;

public class J04005 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        String a = sc.nextLine();
        String b = sc.nextLine();
        double c = (sc.nextDouble() + sc.nextDouble() + sc.nextDouble());

        System.out.println(a + " " + b + " " + c);
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
