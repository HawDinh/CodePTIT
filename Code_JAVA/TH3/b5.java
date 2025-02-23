import java.io.*;
import java.util.*;

class GiangVien {
    private String maGV;
    private String tenGV;
    private double tongGioChuan;

    public GiangVien(String maGV, String tenGV) {
        this.maGV = maGV;
        this.tenGV = tenGV;
        this.tongGioChuan = 0.0;
    }

    public void themGioChuan(double gioChuan) {
        this.tongGioChuan += gioChuan;
    }

    public String getTenGV() {
        return tenGV;
    }

    public double getTongGioChuan() {
        return tongGioChuan;
    }
}

public class TinhGioChuanGiangVien {
    public static void main(String[] args) throws IOException {
        BufferedReader monHocReader = new BufferedReader(new FileReader("MONHOC.in"));
        BufferedReader giangVienReader = new BufferedReader(new FileReader("GIANGVIEN.in"));
        BufferedReader gioChuanReader = new BufferedReader(new FileReader("GIOCHUAN.in"));

        int soMonHoc = Integer.parseInt(monHocReader.readLine().trim());
        Map<String, String> monHocMap = new HashMap<>();
        for (int i = 0; i < soMonHoc; i++) {
            String line = monHocReader.readLine().trim();
            String[] parts = line.split(" ", 2); 
            monHocMap.put(parts[0], parts[1]);
        }
        monHocReader.close();

        int soGiangVien = Integer.parseInt(giangVienReader.readLine().trim());
        Map<String, GiangVien> giangVienMap = new LinkedHashMap<>();
        for (int i = 0; i < soGiangVien; i++) {
            String line = giangVienReader.readLine().trim();
            String[] parts = line.split(" ", 2); 
            giangVienMap.put(parts[0], new GiangVien(parts[0], parts[1]));
        }
        giangVienReader.close();

        int soLopHocPhan = Integer.parseInt(gioChuanReader.readLine().trim());
        for (int i = 0; i < soLopHocPhan; i++) {
            String line = gioChuanReader.readLine().trim();
            String[] parts = line.split(" ");
            String maGV = parts[0];
            String maMon = parts[1];
            double gioChuan = Double.parseDouble(parts[2]);

            if (giangVienMap.containsKey(maGV) && monHocMap.containsKey(maMon)) {
                giangVienMap.get(maGV).themGioChuan(gioChuan);
            }
        }
        gioChuanReader.close();

        for (GiangVien gv : giangVienMap.values()) {
            System.out.printf("%s %.2f%n", gv.getTenGV(), gv.getTongGioChuan());
        }
    }
}


/*
 * Ở các trường đại học, tiền lương của giảng viên được tính toán dựa trên số giờ chuẩn giảng dạy trực tiếp. 
Môn học có mã môn và tên môn
Thông tin của mỗi giảng viên gồm mã giảng viên, tên giảng viên.
Khi tham gia giảng dạy, giảng viên sẽ được ghi nhận số giờ chuẩn cho từng môn.
Giả sử với mỗi môn học thì một giảng viên chỉ giảng dạy nhiều nhất 1 lớp học phần nhưng vẫn có thể dạy nhiều môn học khác nhau.
Viết chương trình lập bảng tính toán giờ chuẩn cho từng giảng viên.

Input – 3 file văn bản

File MONHOC.in
Dòng đầu ghi số môn học. Mỗi môn học viết trên một dòng gồm mã môn, sau đó đến khoảng trống rồi đến tên môn.
File GIANGVIEN.in
Dòng đầu ghi số giảng viên. Mỗi giảng viên viết trên một dòng gồm mã giảng viên và tên giảng viên.
File GIOCHUAN.in
Dòng đầu ghi số lớp học phần. Mỗi lớp học phần sẽ ghi trên một dòng gồm mã giảng viên, mã môn sau đó đến giờ chuẩn (dạng số thực).
Output
Ghi ra danh sách giảng viên theo thứ tự nhập và tổng giờ chuẩn tính được. Thông tin cần liệt kê chỉ bao gồm tên giảng viên và tổng số giờ chuẩn (viết chính xác đến 2 số phần thập phân).


Ví dụ

Input – 3 file văn bản:
MONHOC.in
2
INT1155 Tin hoc co so 2
INT1306 Cau truc du lieu va giai thuat\

GIANGVIEN.in
2
GV01 Nguyen Van An
GV02 Hoang Binh Minh
 
GIOCHUAN.in
2
GV01 INT1155 113.2
GV02 INT1306 126.72

output:
Nguyen Van An 113.20
Hoang Binh Minh 126.72
 */