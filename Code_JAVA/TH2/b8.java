import java.util.*;
import java.io.*;
import java.math.BigInteger;

public class b8 {
    public static void main(String[] args) throws IOException{
        //Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DAYSO.in"));
        ArrayList <BigInteger> a = new ArrayList<>();
        int n = sc.nextInt();
        sc.nextLine();
        BigInteger sum = new BigInteger("0");
        for (int i = 0; i < n; i++) {
            String s = sc.nextLine();
            BigInteger x = new BigInteger(s);
            a.add(x);
            sum = sum.add(x);
        }

        BigInteger min = a.get(0);
        BigInteger max = a.get(0);

        for (BigInteger x:a) {
            if (min.compareTo(x) > 0) {
                min = x;
            }
            if (max.compareTo(x) < 0) {
                max = x;
            }
        }

        System.out.println(min);
        System.out.println(max);
        System.out.println(sum);
    }
}
