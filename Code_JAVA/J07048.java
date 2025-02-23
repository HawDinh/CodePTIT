import java.io.*;
import java.text.*;
import java.util.*;

class SP implements Comparable<SP> {
    String Ma, Ten;
    int Gia, ThoiHan;

    public SP(String ma, String ten, int gia, int thoiHan) {
        Ma = ma;
        Ten = ten;
        Gia = gia;
        ThoiHan = thoiHan;
    }

    @Override
    public int compareTo(SP o) {
        if (Gia == o.Gia) {
            return Ma.compareTo(o.Ma);
        }
        else return -(Gia - o.Gia);
    }
    
    public String toString() {
        return Ma + " " + Ten + " " + Gia + " " + ThoiHan;
    }
}

public class J07048 {

    public static void main(String[] args) throws IOException, FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("SANPHAM.in"));
        int t = sc.nextInt();
        //sc.nextLine();
        List<SP> list = new ArrayList<>();
        
        while (t-- > 0) {
            sc.nextLine();
            String x = sc.nextLine();
            String y = sc.nextLine();
            int z = sc.nextInt();
            int k = sc.nextInt();

            SP a = new SP(x,y,z,k);
            list.add(a);
        }

        Collections.sort(list);

        for (SP i : list) {
            System.out.println(i);
        }
    }
}
