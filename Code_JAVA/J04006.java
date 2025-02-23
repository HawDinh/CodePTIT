import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

public class J04006 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

        String msv = "B20DCCN001";
        String a = sc.nextLine();
        String b = sc.nextLine();
        String c = "";
        try {
            c = sdf.format(sdf.parse(sc.nextLine()));
        } catch (ParseException e) {
            e.printStackTrace();
        }
        Double d = sc.nextDouble();

        System.out.printf("%s %s %s %s %.2f\n", msv, a, b, c, d);
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
