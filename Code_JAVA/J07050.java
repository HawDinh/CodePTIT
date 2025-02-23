import java.io.*;
import java.text.*;
import java.util.*;

class MH implements Comparable<MH> {
    private String Ma,Ten,Nhom;
    private float LoiNhuan;
    private static int dem = 1;

    public MH(String ten, String nhom, float giamua, float giaban) {
        Ma = "MH" + String.format("%02d",dem++);
        Ten = ten;
        Nhom = nhom;
        LoiNhuan = giaban - giamua;
    }

    @Override
    public int compareTo(MH o) {
        return Float.compare(o.LoiNhuan, LoiNhuan);
    }

    public String toString(){
        return Ma + " " + Ten + " " + Nhom + " " + String.format("%.2f",LoiNhuan);
    }

    
}

public class J07050 {

    public static void main(String[] args) throws IOException, FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("MATHANG.in"));
        int t = sc.nextInt();
        List<MH> list = new ArrayList<>();
        while (t-- > 0) {
            sc.nextLine();
            MH a = new MH(sc.nextLine(),sc.nextLine(),sc.nextFloat(),sc.nextFloat());
            list.add(a);
        }
        Collections.sort(list);

        for (MH i:list) {
            System.out.println(i);
        }
    }
}
