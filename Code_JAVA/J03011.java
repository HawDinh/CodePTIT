import java.math.BigInteger;
import java.util.*;
public class J03011 {

public class j {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase(){
        BigInteger a = sc.nextBigInteger();
        BigInteger b = sc.nextBigInteger();
        BigInteger c = a.gcd(b);
        System.out.println(c);
    }
    public static void main(String[] args) {
        long t = sc.nextLong();
        sc.nextLine();
        while (t-- > 0) {
            testCase();
        }
    }
}

}
