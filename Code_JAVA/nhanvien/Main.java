/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package nhanvien;

import java.util.*;
import java.text.*;
public class Main {
    public static void main(String[] args) throws ParseException {
        Scanner in = new Scanner(System.in);
        NhanVien a = new NhanVien(in.nextLine(), in.nextLine(),in.nextLine(),in.nextLine(),in.nextLine(),in.nextLine());
        System.out.println(a);
    }
}

