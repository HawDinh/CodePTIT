import java.io.*;
import java.util.*;

class SinhVien implements Comparable<SinhVien> {
    private String maSV;
    private String hoTen;
    private String lop;
    private String email;
    private String soDienThoai;

    public SinhVien(String maSV, String hoTen, String lop, String email, String soDienThoai) {
        this.maSV = maSV;
        this.hoTen = hoTen;
        this.lop = lop;
        this.email = email;
        this.soDienThoai = "0" + soDienThoai;
    }

    public String getLop() {
        return lop;
    }

    public String getMaSV() {
        return maSV;
    }

    @Override
    public int compareTo(SinhVien o) {
        if (!this.lop.equals(o.lop)) {
            return this.lop.compareTo(o.lop); 
        }
        return this.maSV.compareTo(o.maSV); 
    }

    @Override
    public String toString() {
        return String.format("%s %s %s %s %s", maSV, hoTen, lop, email, soDienThoai);
    }
}

public class b3 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("DANHSACH.in"));
        List<SinhVien> danhSach = new ArrayList<>();
        String line;

        while ((line = br.readLine()) != null) {
            String maSV = line.trim();
            String hoTen = br.readLine().trim();
            String lop = br.readLine().trim();
            String email = br.readLine().trim();
            String soDienThoai = br.readLine().trim();
            danhSach.add(new SinhVien(maSV, hoTen, lop, email, soDienThoai));
        }
        br.close();

        Collections.sort(danhSach); 
        
        for (SinhVien sv : danhSach) {
            System.out.println(sv);
        }
    }
}


/*
 * Để chuẩn bị cho đăng ký đồ án tốt nghiệp, khoa CNTT thu thập thông tin các sinh viên qua google form. Thông tin cần thu thập bao gồm: mã sinh viên, họ tên, lớp, email, số điện thoại. Sau khi xuất file excel thì số điện thoại bị mất số 0 ở đầu.

Hãy bổ sung số 0 vào số điện thoại, sau đó sắp xếp danh sách theo lớp (thứ tự từ điển). Nếu cùng lớp thì sắp xếp theo mã sinh viên (thứ tự từ điển).

Input – file DANHSACH.in

Không có số lượng sinh viên. Nhưng biết mỗi sinh viên ghi trên 5 dòng gồm:

Mã sinh viên
Họ tên
Lớp
Email
Số điện thoại (thiếu chữ số 0 ở đầu).
Output

Ghi ra danh sách đã sắp xếp, mỗi sinh viên ghi trên một dòng với lần lượt các thông tin: mã sinh viên, họ tên, lớp, email, số điện thoại. Mỗi thông tin cách nhau một khoảng trống.

Ví dụ

Input-DANHSACH.in:
B21DCCN123
Tran Van Toan
D21CQCN01-B
toantv@gmail.com
987654321
B21DCCN111
Ly Van Binh
D21CQCN01-B
binhlv@gmail.com
978652142
B21DCAT661
Hoang Tam Anh
D21CQAT01-B
anhht@gmail.com
966554321

Output

B21DCAT661 Hoang Tam Anh D21CQAT01-B anhht@gmail.com 0966554321
B21DCCN111 Ly Van Binh D21CQCN01-B binhlv@gmail.com 0978652142
B21DCCN123 Tran Van Toan D21CQCN01-B toantv@gmail.com 0987654321
 */