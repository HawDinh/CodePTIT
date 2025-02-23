import java.io.*;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.*;

class DeTai {
    private String maSV;
    private String hoTen;
    private String tenDeTai;

    public DeTai(String maSV, String hoTen, String tenDeTai) {
        this.maSV = maSV;
        this.hoTen = hoTen;
        this.tenDeTai = tenDeTai;
    }

    public String getMaSV() {
        return maSV;
    }

    public String getHoTen() {
        return hoTen;
    }

    public String getTenDeTai() {
        return tenDeTai;
    }
}

class BaoCao implements Comparable<BaoCao> {
    private DeTai deTai;
    private LocalTime thoiGian;

    public BaoCao(DeTai deTai, String thoiGian) {
        this.deTai = deTai;
        this.thoiGian = LocalTime.parse(thoiGian, DateTimeFormatter.ofPattern("HH:mm"));
    }

    public LocalTime getThoiGian() {
        return thoiGian;
    }

    public boolean isCaSang() {
        return thoiGian.isBefore(LocalTime.NOON);
    }

    @Override
    public int compareTo(BaoCao o) {
        return this.thoiGian.compareTo(o.thoiGian); 
    }

    @Override
    public String toString() {
        String gioDinhDang = isCaSang()
            ? thoiGian.format(DateTimeFormatter.ofPattern("HH:mm"))
            : thoiGian.minusHours(12).format(DateTimeFormatter.ofPattern("hh:mm"));
        return String.format("%s %s %s %s",
            deTai.getMaSV(), deTai.getHoTen(), deTai.getTenDeTai(), gioDinhDang);
    }
}

public class b4 {
    public static void main(String[] args) throws IOException {
        BufferedReader baiTapReader = new BufferedReader(new FileReader("BAITAP.in"));
        BufferedReader baoCaoReader = new BufferedReader(new FileReader("BAOCAO.in"));

        Map<String, DeTai> deTaiMap = new HashMap<>();
        List<BaoCao> baoCaoList = new ArrayList<>();

        String line;
        while ((line = baiTapReader.readLine()) != null) {
            String maSV = line.trim();
            String hoTen = baiTapReader.readLine().trim();
            String tenDeTai = baiTapReader.readLine().trim();
            deTaiMap.put(maSV, new DeTai(maSV, hoTen, tenDeTai));
        }
        baiTapReader.close();

        while ((line = baoCaoReader.readLine()) != null) {
            String maSV = line.trim();
            String thoiGian = baoCaoReader.readLine().trim();
            DeTai deTai = deTaiMap.get(maSV);
            if (deTai != null) {
                baoCaoList.add(new BaoCao(deTai, thoiGian));
            }
        }
        baoCaoReader.close();

        Collections.sort(baoCaoList);

        List<BaoCao> caSang = new ArrayList<>();
        List<BaoCao> caChieu = new ArrayList<>();
        for (BaoCao bc : baoCaoList) {
            if (bc.isCaSang()) {
                caSang.add(bc);
            } else {
                caChieu.add(bc);
            }
        }

        System.out.println("DANH SACH SINH VIEN BAO CAO CA SANG: " + caSang.size());
        for (BaoCao bc : caSang) {
            System.out.println(bc);
        }

        System.out.println("DANH SACH SINH VIEN BAO CAO CA CHIEU: " + caChieu.size());
        for (BaoCao bc : caChieu) {
            System.out.println(bc);
        }
    }
}



/*
 * Khoa CNTT tổ chức báo cáo thực tập cho sinh viên năm cuối. Ngày báo cáo đã được xác định trước, các sinh viên sẽ được báo cáo vào các khung giờ khác nhau.
Danh sách đề tài thực tập đã được lưu trong file văn bản BAITAP.in trong đó ghi thông tin về đề tài thực tập, mỗi đề tài gồm 3 dòng lần lượt là:
Mã sinh viên: dạng xâu ký tự, không quá 10 ký tự
Họ và tên: không quá 30 ký tự
Tên đề tài: không quá 200 ký tự
Lịch báo cáo được thể hiện trong file văn bản BAOCAO.in trong đó mỗi sinh viên sẽ ghi trên 2 dòng:

Mã sinh viên
Thời gian báo cáo theo định dạng hh:mm trong đó hh ghi giá trị giờ (định dạng 24h); mm là giá trị phút. Ví dụ: 08:40, không trùng nhau
Hãy in ra màn hình thứ tự báo cáo, chia làm 2 ca sáng và chiều (ca sáng kết thúc trước12h trưa, ca chiều tính từ 12h, cùng số lượng sinh viên báo cáo) mỗi dòng ghi đủ các thông tin: mã sinh viên, họ tên, tên đề tài và thời gian báo cáo, do đã chia ra 2 ca nên thời gian ca chiều đổi về định dạng 12h cho dễ theo dõi. Các thông tin cách nhau bởi khoảng trống.

 ví dụ - BAITAP.in:
B19DCCN123
Tran Van An
Tim hieu dien toan dam may
B19DCCN987
Hoang Van Binh
Xay dung game nhap vai
B20DCCN222
Nguyen Van Huy
Xay dung web ban hang

BAOCAO.in:
B19DCCN123
13:45
B19DCCN987
07:30
B20DCCN222
08:00

Output
DANH SACH SINH VIEN BAO CAO CA SANG: 2
B19DCCN987 Hoang Van Binh Xay dung game nhap vai 07:30
B20DCCN222 Nguyen Van Huy Xay dung web ban hang 08:00
DANH SACH SINH VIEN BAO CAO CA CHIEU: 1
B19DCCN123 Tran Van An Tim hieu dien toan dam may 01:45
*/