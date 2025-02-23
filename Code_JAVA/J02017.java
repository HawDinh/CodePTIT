import java.util.*;

public class J02017 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();
        List<Integer> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            a.add(x);
        }

        int i = 0;
        while (i < a.size() - 1) {
            if ((a.get(i) + a.get(i + 1)) % 2 == 0) {
                a.remove(i + 1);
                a.remove(i);
                i = Math.max(0, i - 1);  // Quay lại vị trí trước đó để tiếp tục kiểm tra
            } else {
                i++;
            }
        }

        System.out.println(a.size());
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
