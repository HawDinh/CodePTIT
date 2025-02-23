import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        //Scanner sc = new Scanner(new File("LUYENTAP.in"));
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<SinhVien> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            sc.nextLine();
            String b = sc.nextLine();
            int c = sc.nextInt();
            int d = sc.nextInt();
            SinhVien x = new SinhVien(b,c,d);
            a.add(x);
        }
        Collections.sort(a);

        for (SinhVien x:a) {
            System.out.println(x);
        }
    }
}
