import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;

public class b5 {
    public static int check(int n) {
        if (n < 2) return 0;
        for (int i = 2;i <= Math.sqrt(n); i++) {
            if (n % i == 0) return 0;
        }
        return 1;
    }
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
        ArrayList<Integer> a = (ArrayList<Integer>) in.readObject();

        Set<Integer> set1 = new TreeSet<>(a);
        List<Integer> b = new ArrayList<>();

        for (int num : set1) {
            if (check(num) == 1 && num > 100) {
                b.add(num);
            }
        }

        Collections.sort(b);
        for (int i:b) {
            System.out.println(i);
        }
    }

}

/*
 * Cho file nhị phân DAYSO.DAT trong đó ghi một ArrayList<Integer> theo kiểu Object. Hãy thống kê các số nguyên tố khác nhau có từ 3 chữ số trở lên và liệt kê theo thứ tự từ nhỏ đến lớn.

Input

File nhị phân DAYSO.DAT trong đó ghi một ArrayList<Integer>.

Dữ liệu đảm bảo trong ArrayList có không quá 100000 đối tượng số Integer. Các giá trị số cũng đều không quá 1000000.

Output

Ghi lần lượt các số nguyên tố khác nhau có từ 3 chữ số trở lên theo thứ tự từ nhỏ đến lớn, mỗi số ghi trên một dòng.
 */