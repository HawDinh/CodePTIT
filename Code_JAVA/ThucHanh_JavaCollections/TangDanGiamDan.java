import java.util.*;

public class TangDanGiamDan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            Set<Integer> evenSet = new TreeSet<>();
            Set<Integer> oddSet = new TreeSet<>(Collections.reverseOrder());

            for (int i = 0; i < n; i++) {
                int x = sc.nextInt();
                if (x % 2 == 0) {
                    evenSet.add(x);
                } else {
                    oddSet.add(x);
                }
            }

            for (int num : evenSet) {
                System.out.print(num + " ");
            }
            System.out.println();

            for (int num : oddSet) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
