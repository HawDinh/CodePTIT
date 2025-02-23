package J02020;

import java.text.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        List<NhanVien> arr = new ArrayList<>();
        int n = Integer.parseInt(sc.nextLine());

        for (int i = 0; i < n; i++) {
            arr.add(new NhanVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }

        for (NhanVien x : arr) {
            System.out.println(x);
        }
    }
}
