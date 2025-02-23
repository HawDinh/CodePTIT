import java.io.*;
import java.util.*;
import java.text.*;
import java.time.*;
import java.time.format.DateTimeFormatter;

class TS implements Comparable<TS> {
    String Ma, Ten;
    float DiemUT, DiemXT;
    
    public TS(String ma, String ten, float toan, float ly, float hoa) {
        this.Ma = ma;
        this.Ten = chuanhoa(ten);
        
        if (ma.charAt(2) == '1') {
            this.DiemUT = (float)0.5;
        }
        if (ma.charAt(2) == '2') {
            this.DiemUT = (float)1;
        }
        if (ma.charAt(2) == '3') {
            this.DiemUT = (float)2.5;
        }
        
        
        this.DiemXT = toan * 2 + ly + hoa + this.DiemUT;
    } 
    
    public String chuanhoa(String s) {
        String[] a = s.split("\\s+");
        String tmp = "";
        
        for (String i:a) {
            tmp += i.substring(0, 1).toUpperCase() + i.substring(1).toLowerCase();
            tmp += " ";
        }
        return tmp.trim();
    }

    public float getDiemXT() {
        return DiemXT;
    }
    
    @Override
    public int compareTo(TS o) {
        if (this.DiemXT == o.DiemXT) {
            return this.Ma.compareTo(o.Ma);
        }
        else {
            return Float.compare(o.DiemXT, this.DiemXT);
        }
    }
    
    @Override
    public String toString(){
        String diemxt, diemut;
        if (DiemXT % 1 == 0) {
            diemxt = String.format("%d", (int)this.DiemXT);
        }
        else {
            diemxt = String.format("%.1f", this.DiemXT);
        }

        if (DiemUT % 1 == 0) {
            diemut = String.format("%d", (int)this.DiemUT);
        }
        else {
            diemut = String.format("%.1f", this.DiemUT);
        }
        return this.Ma + " " + this.Ten + " " + diemut + " " + diemxt;
    }
}

public class k {
    
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("THISINH.in"));
        int n = Integer.parseInt(sc.nextLine());
        List<TS> list = new ArrayList<>();
        while (n-- > 0) {
            String ma = sc.nextLine().trim();
            String ten = sc.nextLine().trim();
            float toan = Float.parseFloat(sc.nextLine());
            float li = Float.parseFloat(sc.nextLine());
            float hoa = Float.parseFloat(sc.nextLine());
            TS a = new TS(ma, ten, toan, li, hoa);
            list.add(a);
        }
        
        int k = Integer.parseInt(sc.nextLine());
        
        Collections.sort(list);
        
        Float DiemChuan = list.get(k - 1).getDiemXT();
        System.out.println(String.format("%.1f", DiemChuan));
        
        for (TS i : list) {
            System.out.print(i);
            if (i.getDiemXT() >= DiemChuan) {
                System.out.println(" TRUNG TUYEN");
            }
            else System.out.println(" TRUOT");
        }
    }
}
