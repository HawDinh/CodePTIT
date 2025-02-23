import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class DN implements Comparable<DN> {
    private String maDN;
    private String tenDN;
    private String SL;

    public DN(String maDN, String tenDN, String sL) {
        this.maDN = maDN;
        this.tenDN = tenDN;
        this.SL = sL;
    }

    public String getMaDN() {
        return maDN;
    }

    public void setMaDN(String maDN) {
        this.maDN = maDN;
    }

    public String getTenDN() {
        return tenDN;
    }

    public void setTenDN(String tenDN) {
        this.tenDN = tenDN;
    }

    public String getSL() {
        return SL;
    }

    public void setSL(String sL) {
        SL = sL;
    }

    @Override
    public String toString() {
        return maDN + " " + tenDN + " " + SL;
    }

    @Override
    public int compareTo (DN b) {
        return maDN.compareTo(b.maDN);
    }

}

public class J07037 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DN.in"));
        int n = sc.nextInt();
        sc.nextLine();

        List<DN> list = new ArrayList<>();

        while (n-- > 0) {
            DN i = new DN(sc.nextLine(),sc.nextLine(),sc.nextLine());
            list.add(i);
        }

        Collections.sort(list);

        for (DN i : list) {
            System.out.println(i);
        }
    }
}
