package BaiToanBanHang;

public class MatHang {
    private static int dem = 1;
    String MaMH,TenMH,DonVi;
    int GiaMua;
    int GiaBan;

    public MatHang (String a, String b , int c, int d) {
        this.MaMH = String.format("MH%03d", dem++);
        this.TenMH = a;
        this.DonVi = b;
        this.GiaMua = c;
        this.GiaBan = d;
    }

    public String getTenMH() {
        return TenMH;
    }

    public String getDonVi() {
        return DonVi;
    }

    public int getGiaMua() {
        return GiaMua;
    }

    public int getGiaBan() {
        return GiaBan;
    }
}
