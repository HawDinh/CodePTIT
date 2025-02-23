import java.util.*;

class KhachHang {
    private static dem = 0;
    String MaKH,TenKH,GT,NgaySinh,DiaChi;

    public KhachHang (a, b , c, d) {
        this.MaKH = String.format("KH%03d", null)
        this.TenKH = a;
        this.GT = b;
        this.NgaySinh = c;
        this.DiaChi = d;
    }

    public String getTenKH() {
        return TenKH;
    }

    public String getDiaChi() {
        return DiaChi;
    }
}

public class baitoanbanhang {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
        }
    }
}
