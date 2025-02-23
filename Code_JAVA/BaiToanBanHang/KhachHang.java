package BaiToanBanHang;
import java.io.*;

public class KhachHang {
    private static int dem = 1;
    String MaKH,TenKH,GT,NgaySinh,DiaChi;

    public KhachHang (String a, String b , String c, String d) {
        this.MaKH = String.format("KH%03d", dem++);
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
