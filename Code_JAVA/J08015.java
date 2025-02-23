import java.util.*;

public class J08015 {
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();
        Long k = sc.nextLong();
        Long[] a = new Long[n];
        
        Map<Long, Long> mp = new HashMap<>();
        Long dem = 0L;
        Long tmp;

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
            tmp = k - a[i];

            if (mp.containsKey(tmp)) {
                dem += mp.get(tmp);
                mp.put(a[i], mp.getOrDefault(a[i], 0L) + 1);
            }
            else {
                mp.put(a[i], mp.getOrDefault(a[i], 0L) + 1);
            }
        }
        System.out.println(dem);
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
        }
    }
}
