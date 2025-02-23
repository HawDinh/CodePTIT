import java.io.*;
import java.text.*;
import java.util.*;

class KH implements Comparable<KH> {
    private String Ma, Ten, SoPhong;
    private Long SoNgay,Cost;
    private static int dem = 1;

    public KH(String ten, String sophong, String start, String end, long phatsinh) throws ParseException {
        Ma = "KH" + String.format("%02d", dem++);
        Ten = chuanhoa(ten);
        SoPhong = sophong;
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        Date batdau = sdf.parse(start);
        Date ketthuc = sdf.parse(end);
        SoNgay = (ketthuc.getTime() - batdau.getTime())/(1000L * 24 * 60 * 60) + 1;
        
        if (sophong.charAt(0) == '1') {
            Cost = 25L * SoNgay + phatsinh;
        }
        
        else if (sophong.charAt(0) == '2') {
            Cost = 34L * SoNgay + phatsinh;
        }
        
        else if (sophong.charAt(0) == '3') {
            Cost = 50L * SoNgay + phatsinh;
        }
        
        else{
            Cost = 80L * SoNgay + phatsinh;
        }
    }

    public String chuanhoa(String s) {
        String[] words = s.split("\\s+");
        String tmp = "";
        for (int i = 0; i < words.length; i++) {
            String x = words[i];
            tmp += x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase();
            if (i != words.length - 1) {
                tmp += " ";
            }
        }
        return tmp.trim();
    }
    
    @Override
    public int compareTo(KH o) {
        return Long.compare(o.Cost, Cost);
    }
    
    @Override
    public String toString(){
       return Ma + " " + Ten+ " " + SoPhong + " " + SoNgay + " " + Cost; 
    }
}

public class J07051 {
    public static void main(String[] args) throws IOException, FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        int t = Integer.parseInt(sc.nextLine());
        List<KH> list = new ArrayList<>();
        while (t-- > 0) {
            String a = sc.nextLine().trim();
            String b = sc.nextLine().trim();
            String c = sc.nextLine();
            String d = sc.nextLine();
            Long e = Long.parseLong(sc.nextLine());
            KH kh = new KH(a,b,c,d,e);
            list.add(kh);
        }
        Collections.sort(list);

        for (KH i:list) {
            System.out.println(i);
        }
    }
}
