import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07001 {

    public static void testCase() {
        try {
            Scanner sc = new Scanner(new File("DATA.in"));
            while (sc.hasNext()) {
                String s = sc.nextLine();
                System.out.println(s);
            }
        } catch (FileNotFoundException e) {
            System.out.println("File không tìm thấy: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        testCase(); 
    }
}
