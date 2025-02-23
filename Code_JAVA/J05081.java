import java.util.*;
import java.io.*;

class MatHang implements Comparable<MatHang> {
    private static int dem = 1;
    private String ma, ten, donvi;
    private int giamua, giaban,loinhuan;

    public MatHang(String a, String b, int c, int d) {
        this.ma = String.format("MH%03d", dem++);
        this.ten = a;
        this.donvi = b;
        this.giamua = c;
        this.giaban = d;

        this.loinhuan = d - c;
    }

    @Override
    public int compareTo(MatHang b) {
        if (Integer.compare(this.loinhuan, b.loinhuan) == 0) {
            return this.ma.compareTo(b.ma);
        }
        else return Integer.compare(b.loinhuan, this.loinhuan);
    }

    @Override
    public String toString() {
        return String.format("%s %s %s %d %d %d", ma, ten, donvi, giamua, giaban, loinhuan);
    }
}

public class J05081 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();
        sc.nextLine();
        List<MatHang> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String ten = sc.nextLine();
            String donvi = sc.nextLine();
            int giamua = sc.nextInt();
            int giaban = sc.nextInt();
            sc.nextLine();  // Để xử lý dòng trống sau khi nhập số nguyên
            a.add(new MatHang(ten, donvi, giamua, giaban));
        }

        Collections.sort(a);

        for (MatHang i : a) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
