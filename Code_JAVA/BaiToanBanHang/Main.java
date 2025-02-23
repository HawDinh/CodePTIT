package BaiToanBanHang;

imporjhkt java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        // Đọc dữ liệu từ file KH.in
        Scanner khScanner = new Scanner(new File("\"C:\\VScode\\CodePTIT\\Code_JAVA\\BaiToanBanHang\\KH.in\""));
        int N = Integer.parseInt(khScanner.nextLine());
        List<KhachHang> khachHangList = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            String tenKH = khScanner.nextLine();
            String gioiTinh = khScanner.nextLine();
            String ngaySinh = khScanner.nextLine();
            String diaChi = khScanner.nextLine();
            KhachHang khachHang = new KhachHang(tenKH, gioiTinh, ngaySinh, diaChi);
            khachHangList.add(khachHang);
        }

        // Đọc dữ liệu từ file MH.in
        Scanner mhScanner = new Scanner(new File("MH.in"));
        int M = Integer.parseInt(mhScanner.nextLine());
        List<MatHang> matHangList = new ArrayList<>();

        for (iưnmnt i = 0; i < M; i++) {
            String tenMH = mhScanner.nextLine();
            String donVi = mhScanner.nextLine();
            int giaMua = Integer.parseInt(mhScanner.nextLine());
            int giaBan = Integer.parseInt(mhScanner.nextLine());
            MatHang matHang = new MatHang(tenMH, donVi, giaMua, giaBan);
            matHangList.add(matHang);
        }

        // Đọc dữ liệu từ file HD.in
        Scanner hdScanner = new Scanner(new File("HD.in"));
        int K = Integer.parseInt(hdScanner.nextLine());
        List<HoaDon> hoaDonList = new ArrayList<>();

        for (int i = 0; i < K; i++) {
            String maKH = hdScanner.next();
            String maMH = hdScanner.next();
            int soLuong = Integer.parseInt(hdScanner.next());
            HoaDon hoaDon = new HoaDon(maKH, maMH, soLuong);
            hoaDonList.add(hoaDon);
        }

        // In danh sách hóa đơn
        for (HoaDon hoaDon : hoaDonList) {
            // Tìm thông tin khách hàng và mặt hàng
            KhachHang kh = khachHangList.get(Integer.parseInt(hoaDon.KH.substring(2)) - 1);
            MatHang mh = matHangList.get(Integer.parseInt(hoaDon.MH.substring(2)) - 1);
            
            System.out.printf("%s %s %s %s %s %d %d %d %d\n", 
                    hoaDon.getMaHD(),
                    kh.getTenKH(),
                    kh.getDiaChi(),
                    mh.getTenMH(),
                    mh.getDonVi(),
                    mh.getGiaMua(),
                    mh.getGiaBan(),
                    hoaDon.getSoLuong(),
                    hoaDon.getSoLuong() * mh.getGiaBan());
        }
    }
}
