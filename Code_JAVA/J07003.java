import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class J07003 {
    public static void testCase() {
        try {
            Scanner sc = new Scanner(new File("DATA.in"));
            String s = sc.nextLine();
            while (s.length() > 1) {
                BigInteger a = new BigInteger(s.substring(0, s.length()/2));
                BigInteger b = new BigInteger(s.substring(s.length()/2));
                s = a.add(b).toString();
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
