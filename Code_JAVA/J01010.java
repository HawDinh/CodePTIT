import java.util.Scanner;

public class J01010 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase(){
        String s = sc.nextLine();
        String x = "";
        for (char i : s.toCharArray()) {
            if (i == '0' || i == '8' || i == '9') {
                x += 0;
            }
            else if (i == '1') {
                x += 1;
            }
            else {
                x = "INVALID";
                break;
            }
        }

        x = x.replaceFirst("^0+", "");
        
        if (x.isEmpty()) {
            x = "INVALID";
        }

        System.out.println(x);
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            testCase();
        }
    }
}
