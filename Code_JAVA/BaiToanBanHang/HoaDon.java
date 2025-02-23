package BaiToanBanHang;

public class HoaDon {
    private static int dem = 1;
    String MaHD, KH, MH;
    int SoLuong;

    public HoaDon (String a, String b , int c) {
        this.MaHD = String.format("HD%03d", dem++);
        this.KH = a;
        this.MH = b;
        this.SoLuong = c;
    }

    public String getMaHD() {
        return MaHD;
    }

    public int getSoLuong() {
        return SoLuong;
    }
}
