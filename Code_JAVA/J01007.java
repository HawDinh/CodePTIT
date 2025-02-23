import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class J01007 {
    public static Scanner sc = new Scanner(System.in);
    static long F[] = new long[100];
    static Map<Long, Integer> mp = new HashMap<>();


    public static void Ktao(){
        F[1]=0L;
        F[2]=1L;
        mp.put(1L,1);
        mp.put(0L,1);
        for (int i = 3; i <= 93; i++) {
            F[i] = F[i-1] + F[i-2];
            mp.put(F[i],1);
        }
    }

    public static void testCase(){
        long n = sc.nextLong();
            if (mp.containsKey(n)) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        Ktao();
        while (t-- > 0) {
            testCase();
        }
    }
}
