import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;

public class b3 {

    public static boolean[] sang(int max) {
        boolean[] isPrime = new boolean[max + 1];
        Arrays.fill(isPrime, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= max; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= max; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return isPrime;
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        boolean[] isPrime = sang(1000000);

        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));

        ArrayList<String> list1 = (ArrayList<String>) in1.readObject();
        ArrayList<Integer> list2 = (ArrayList<Integer>) in2.readObject();

        Set<String> uniqueIDs = new HashSet<>();

        // Tạo mã định danh từ chuỗi và số
        for (String str : list1) {
            for (Integer num : list2) {
                // Chuyển đổi số thành chuỗi 3 ký tự
                String numStr = String.format("%03d", num);
                uniqueIDs.add(str + numStr);
            }
        }

        // Chuyển đổi Set sang List và sắp xếp
        List<String> sortedIDs = new ArrayList<>(uniqueIDs);
        Collections.sort(sortedIDs);

        // In kết quả
        for (String id : sortedIDs) {
            System.out.println(id);
        }
    }
}

/* Để tăng tính bảo mật cho hệ thống, mã định danh của người dùng sẽ được tạo bởi phương pháp mới với 8 ký tự, trong đó:

5 ký tự đầu tiên là các chữ cái viết hoa, lấy từ file nhị phân DATA1.in
3 ký tự cuối là một giá trị số nguyên có ba chữ số lấy từ file nhị phân DATA2.in
File nhị phân DATA1.in được tạo sẵn với một ArrayList<String> được ghi theo kiểu Object với không quá 1000 xâu ký tự chữ hoa có đúng 5 chữ cái. Tuy nhiên có thể bị trùng nhau.

File nhị phân DATA2.in được tạo sẵn với một ArrayList<Integer> được ghi theo kiểu Object với không quá 500 số nguyên có ba chữ số. Tuy nhiên có thể bị trùng nhau.

Hãy viết chương trình liệt kê tất cả các giá trị mã khác nhau có thể được tạo ra và sắp xếp lại theo thứ tự từ điển.

Input

Hai file nhị phân DATA1.in và DATA2.in như mô tả.

Output

Danh sách các mã khác nhau được sắp xếp theo thứ tự từ điển, mỗi mã ghi trên một dòng. */