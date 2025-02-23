import java.util.*;
import java.util.HashSet;

public class b2 {

    public static Scanner sc = new Scanner(System.in);

    public static void printRange(int start, int end) {
        if (start == end) {
            System.out.println(start);
        }
        else {
            System.out.println(start + "-" + end);
        }
    }

    public static void in(int n,Set<Integer> error, boolean isError) {
        boolean first = true;
        int start = -1;

        for(int i = 1; i<=n; i++) {
            boolean spLoi = error.contains(i);

            if (isError == spLoi) {
                if (start == -1) {
                    start = i;
                }
                else {
                    if (start != -1) {
                        if(!first) {
                            System.out.println(", ");
                            printRange(start,i - 1);
                            first = false;
                            start = -1;
                        }
                    }
                }
                if (start != -1) {
                    if (!first) {
                        System.out.println(" and ");
                        printRange(start,n);
                    }
                    System.out.println();
                }
            }
        }
    }

    public static void testCase() {
        int n = sc.nextInt();
        int m = sc.nextInt();
        Set<Integer> error  = new Hashset<>();

        for (int i = 0; i < m; i++) {
            error.add(sc.nextInt());
        }

        System.out.println("Errors: ");
        in(n, error, true);

        System.out.println("Corrects: ");
        in(n, error, false);
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}

/* ĐÁNH DẤU SẢN PHẨM LỖI

Sau khi qua công đoạn đóng gói, các sản phẩm của công ty X sẽ được đưa qua máy phát hiện lỗi. Các sản phẩm lỗi sẽ được trả lại và thứ tự của sản phẩm đó sẽ được ghi vào file log.

Dựa trên file log của hệ thống, hãy liệt kê danh sách chi tiết các sản phẩm bị lỗi và các sản phẩm tốt.

Input - nhập từ bàn phím

Dòng đầu ghi 2 số N, M lần lượt là tổng số sản phẩm và số sản phẩm bị lỗi,

2 ≤ N ≤ 100000; 1 ≤ M ≤ min(N,1000).

Tiếp theo là M giá trị số, ghi rõ thứ tự các sản phẩm lỗi theo thứ tự tăng dần. Các giá trị này đảm bảo trong phạm vi từ 1 đến N.

Output - in ra màn hình

Ghi 2 dòng:

Dòng 1 là các dòng hoặc đoạn liên tiếp các sản phẩm bị lỗi theo thứ tự tăng dần
Dòng 2 là các sản phẩm đơn hoặc đoạn liên tiếp các sản phẩm đã viết chính xác theo thứ tự tăng dần
Chú ý: sử dụng dấu gạch ngang để biểu thị đoạn liên tiếp. Xem ví dụ để hiểu rõ hơn cách ghi kết quả.

Ví dụ

Input 1

100 10
2 3 5 10 11 12 25 26 88 89

Output 1

Errors: 2-3, 5, 10-12, 25-26 and 88-89
Correct: 1, 4, 6-9, 13-24, 27-87 and 90-100 */