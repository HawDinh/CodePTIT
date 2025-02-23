package J02020;

import java.text.*;
import java.util.*;

public class NhanVien {

    private static int dem = 1;

    private String ma, ten, gt, dchi, mst;
    private Date date, datehd;

    public NhanVien(String ten, String gt, String dchi, String mst, String date, String datehd) throws ParseException {
        this.ma = String.format("%05d", dem++);;
        this.ten = ten;
        this.gt = gt;
        this.dchi = dchi;
        this.mst = mst;
        this.date = new SimpleDateFormat("dd/MM/yyyy").parse(date);
        this.datehd = new SimpleDateFormat("dd/MM/yyyy").parse(datehd);
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + gt + " " +  new SimpleDateFormat("dd/MM/yyyy").format(date) + " " + dchi + " " + mst + " " + new SimpleDateFormat("dd/MM/yyyy").format(datehd);
    }
    
}
