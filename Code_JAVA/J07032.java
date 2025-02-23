import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOError;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;

public class J07032 {

    public static boolean check(int n) {
        String s = String.valueOf(n);

        if (s.length() % 2 == 0 || s.length() == 1) return false;

        for (char i : s.toCharArray()){
            if ((i - '0') % 2 == 0) return false;
        }

        int l = 0;
        int r = s.length() - 1;
        while (l < r) {
            if (s.charAt(l) != s.charAt(r)) return false;
            l++;
            r--;
        }
        return true;
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));

        List<Integer> list1 = (List<Integer>) ois1.readObject();
        List<Integer> list2 = (List<Integer>) ois2.readObject();

        Map<Integer, Integer> mp1 = new HashMap<>();
        Map<Integer, Integer> mp2 = new HashMap<>();

        for (int i:list1) {
            if (check(i)) {
                mp1.put(i, mp1.getOrDefault(i, 0) + 1);
            }
        }

        for (int i:list2) {
            if (check(i)) {
                mp2.put(i, mp2.getOrDefault(i, 0) + 1);
            }
        }

        Set<Integer> ans = new TreeSet<>(mp1.keySet());
        ans.retainAll(mp2.keySet());

        int max_size = Math.min(ans.size(), 10);

        for (int i : ans) {
            if (max_size == 0) break;
            else {
                int cnt = mp1.get(i) + mp2.get(i);
                System.out.println( i + " " + cnt);
                max_size--;
            }
        }
    }
}
