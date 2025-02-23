import java.io.*;
import java.text.*;
import java.util.*;

class KH implements Comparable<KH> {
    private String Ma,Ten,MaPhong;
    private Long tgian;
    private static int dem = 1;

    public KH(String ten, String maPhong, String ngayDen, String ngayDi) throws ParseException {
        Ma = "KH" + String.format("%02d", dem++);
        Ten = ten;
        MaPhong = maPhong;

        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        
        Date start = sdf.parse(ngayDen);
        Date end = sdf.parse(ngayDi);

        this.tgian = (end.getTime() - start.getTime()) / (1000L * 60 * 60 *24);
    }

    @Override
    public String toString() {
        return Ma + " " + Ten + " " + MaPhong + " " + tgian;
    }

    @Override
    public int compareTo(KH other) {
        return -tgian.compareTo(other.tgian);
    }
    
}

public class J07046 {

    public static void main(String[] args) throws IOException, ParseException {
        Scanner sc = new Scanner(new File("KHACH.in"));
        int t = sc.nextInt();
        sc.nextLine();
        List<KH> list = new ArrayList<>();
        while (t-- > 0) {
            KH x = new KH(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
            list.add(x);
        }
        Collections.sort(list);
        
        for (KH i:list) {
            System.out.println(i);
        }
    }
}
