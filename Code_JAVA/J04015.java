import java.util.*;

class GiaoVien {
    String MaNgach;
    String Ten;
    int LuongCoBan;
    String ChucVu;
    int HeSo;
    int PhuCap;
    int ThuNhap;

    public GiaoVien(String maNgach, String ten, int luongCoBan) {
        MaNgach = maNgach;
        Ten = ten;
        LuongCoBan = luongCoBan;
        ChucVu = MaNgach.substring(0, 2);
        HeSo = Integer.parseInt(MaNgach.substring(2, 4));

        if (ChucVu.equals("HT")) {
            PhuCap = 2000000;
        }
    
        else if (ChucVu.equals("HP")) {
            PhuCap = 900000;
        }
        else {
            PhuCap = 500000;
        }
    
        ThuNhap = PhuCap + LuongCoBan * HeSo;
    }

    @Override
    public String toString(){
        return String.format("%s %s %d %d %d", MaNgach, Ten, HeSo, PhuCap, ThuNhap);
    }

}

public class J04015 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        GiaoVien a = new GiaoVien(sc.nextLine(), sc.nextLine(), sc.nextInt());

        System.out.println(a.toString());

    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
