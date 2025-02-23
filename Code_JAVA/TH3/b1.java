 import java.io.*;
import java.util.*;

public class b1 {

    public static boolean prime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        try {
            ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
            ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
            List<Integer> list1 = (List<Integer>) ois1.readObject();
            List<Integer> list2 = (List<Integer>) ois2.readObject();

            Map<Integer, Integer> dem1 = new HashMap<>();
            Map<Integer, Integer> dem2 = new HashMap<>();

            for (int i:list1) {
                if (prime(i)) {
                    dem1.put(i, dem1.getOrDefault(i, 0) + 1);
                }
            }

            for (int i:list2) {
                if (prime(i)) {
                    dem2.put(i, dem2.getOrDefault(i, 0) + 1);
                }
            }

            TreeSet<Integer> ans = new TreeSet<>(dem1.keySet());
            ans.retainAll(dem2.keySet());

            for (int i : ans) {
                System.out.println(i + " " + dem1.get(i) + " " + dem2.get(i));
            }

        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
