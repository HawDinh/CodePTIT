/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package nhanvien;

/**
 *
 * @author ADMIN
 */
import java.util.*;
import java.text.*;
public class NhanVien {
    private String ma, ten, gioitinh, diachi, masothue;
    private Date ngaysinh, ngayky;

    public NhanVien(String ten, String gioitinh, String ngaysinh, String diachi, String masothue, String ngayky) throws ParseException {
        this.ma = "00001";
        this.ten = ten;
        this.gioitinh = gioitinh;
        this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
        this.diachi = diachi;
        this.masothue = masothue;
        this.ngayky = new SimpleDateFormat("dd/MM/yyyy").parse(ngayky);
    }
    
    public String toString(){
        return ma + " " + ten + " " + gioitinh + " " + new SimpleDateFormat("dd/MM/yyyy").format(ngaysinh)
                + " " + diachi + " " + masothue + " " + new SimpleDateFormat("dd/MM/yyyy").format(ngayky);
    }
}

