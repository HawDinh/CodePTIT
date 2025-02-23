import java.io.*;
import java.util.*;

class LoaiPhong implements Comparable<LoaiPhong> {
    private char KiHieu;
    private String Ten;
    int DonGia;
    float PhiPV;
    
    public LoaiPhong(String line) {
        String[] parts = line.split("\\s+");
        this.KiHieu = parts[0].charAt(0);
        this.Ten = parts[1];
        this.DonGia = Integer.parseInt(parts[2]);
        this.PhiPV = Float.parseFloat(parts[3]);
    }

    public char getKiHieu() {
        return KiHieu;
    }

    public void setKiHieu(char kiHieu) {
        KiHieu = kiHieu;
    }

    public String getTen() {
        return Ten;
    }

    public void setTen(String ten) {
        Ten = ten;
    }

    public int getDonGia() {
        return DonGia;
    }

    public void setDonGia(int donGia) {
        DonGia = donGia;
    }

    public float getPhiPV() {
        return PhiPV;
    }

    public void setPhiPV(float phiPV) {
        PhiPV = phiPV;
    }

    @Override
    public int compareTo(LoaiPhong o) {
        return Ten.compareTo(o.Ten);
    }

    @Override
    public String toString() {
        return KiHieu + " " + Ten + " " + DonGia + " " + PhiPV;
    }
}

public class J07045 {

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
}
