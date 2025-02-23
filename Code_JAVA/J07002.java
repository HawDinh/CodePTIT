import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07002 {

    public static void testCase() {
        try {
            Scanner sc = new Scanner(new File("DATA.in"));
            long ans = 0;
            while (sc.hasNext()) {
                if (sc.hasNextInt()) {
                    ans += sc.nextInt();
                } else {
                    sc.next();
                }
            }
            System.out.println(ans);
        } catch (FileNotFoundException e) {
            System.out.println("File không tìm thấy: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        testCase(); 
    }
}
