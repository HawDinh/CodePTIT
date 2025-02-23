import java.util.*;

public class DaoTu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // Đọc bỏ dòng trống sau khi nhập số lượng bộ test

        while (t-- > 0) {
            String S = sc.nextLine();
            String[] words = S.split("\\s+");

            Collections.reverse(Arrays.asList(words));

            System.out.println(String.join(" ", words));
        }
    }
}
