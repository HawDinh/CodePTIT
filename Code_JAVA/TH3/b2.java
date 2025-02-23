import java.util.*;
import java.time.Duration;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

class CongNhan implements Comparable<CongNhan> {
    private String maCN;
    private String tenCN;
    private LocalTime gioVao;
    private LocalTime gioRa;
    private Duration thoiGianLamViec;

    public CongNhan(String maCN, String tenCN, String gioVao, String gioRa) {
        this.maCN = maCN;
        this.tenCN = tenCN;
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm");
        this.gioVao = LocalTime.parse(gioVao, formatter);
        this.gioRa = LocalTime.parse(gioRa, formatter);
        this.tinhThoiGianLamViec();
    }

    private void tinhThoiGianLamViec() {
        this.thoiGianLamViec = Duration.between(gioVao, gioRa).minusMinutes(60); // Trừ giờ nghỉ trưa
    }

    public String getMaCN() {
        return maCN;
    }

    public Duration getThoiGianLamViec() {
        return thoiGianLamViec;
    }

    public String danhGia() {
        return thoiGianLamViec.toHours() >= 8 ? "DU" : "THIEU";
    }

    @Override
    public int compareTo(CongNhan o) {
        if (!this.thoiGianLamViec.equals(o.thoiGianLamViec)) {
            return o.thoiGianLamViec.compareTo(this.thoiGianLamViec); 
        }
        return this.maCN.compareTo(o.maCN); 
    }

    @Override
    public String toString() {
        long hours = thoiGianLamViec.toHours();
        long minutes = thoiGianLamViec.minusHours(hours).toMinutes();
        return String.format("%s %s %d gio %d phut %s", maCN, tenCN, hours, minutes, danhGia());
    }
}

public class b2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        List<CongNhan> danhSachCongNhan = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String maCN = sc.nextLine().trim();
            String tenCN = sc.nextLine().trim();
            String gioVao = sc.nextLine().trim();
            String gioRa = sc.nextLine().trim();
            danhSachCongNhan.add(new CongNhan(maCN, tenCN, gioVao, gioRa));
        }

        Collections.sort(danhSachCongNhan); 

        for (CongNhan cn : danhSachCongNhan) {
            System.out.println(cn);
        }
    }
}


/*
 Công ty ABC chấm công các công nhân để tính thời gian làm việc, từ đó tính xem công nhân có làm việc đủ thời gian không. Thời gian làm việc chuẩn là 8 giờ. Thời gian làm việc của công nhân tính bằng thời gian ra về trừ thời gian đến và trừ một giờ (60 phút) nghỉ trưa. 

Input - nhập từ bàn phím

Dòng đầu của dữ liệu vào ghi số lượng công nhân chấm công (không quá 50).

Thông tin về một công nhân chấm công được ghi lại trên 4 dòng lần lượt là:

Mã công nhân (xâu ký tự độ dài không quá 10, không có khoảng trống)
Tên công nhân (xâu ký tự độ dài không quá 100, có thể có khoảng trống).
Giờ vào (định dạng hh:mm)
Giờ ra (định dạng hh:mm)
Ouput - In ra màn hình

Ghi ra danh sách công nhân đã được sắp xếp theo thời gian làm việc giảm dần cùng với thông tin thiếu (THIEU) hoặc đủ thời gian tiêu chuẩn (DU).

Trong trường hợp thời gian làm việc bằng nhau thì sẽ sắp xếp theo mã công nhân (thứ tự từ điển).

Ví dụ:
input:
2
01T
Nguyen Van An
08:00
17:30
06T
Tran Hoa Binh
09:05
17:00

output:
01T Nguyen Van An 8 gio 30 phut DU
06T Tran Hoa Binh 6 gio 55 phut THIEU
 */