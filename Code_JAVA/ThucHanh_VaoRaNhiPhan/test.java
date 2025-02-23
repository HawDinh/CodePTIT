import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;

public class test {

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

    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException, ClassNotFoundException {

        boolean[] isPrime = sang(1000000);

        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));

        ArrayList<Integer> list1 = (ArrayList<Integer>) in1.readObject();
        ArrayList<Integer> list2 = (ArrayList<Integer>) in2.readObject();

        int a[] = new int[10001];
        int b[] = new int[10001];

        Set<Integer> set1 = new HashSet<>(list1);
        Set<Integer> set2 = new HashSet<>(list2);
        List<Integer> primesInList1 = new ArrayList<>(100001);

        for (int num : set1) {
            if (num < 1000000 && isPrime[num] && !set2.contains(num)) {
                primesInList1.add(num);
            }
        }

        Collections.sort(primesInList1);

        for (int n : primesInList1) {
            int m = 1000000 - n;
            if (n < m && primesInList1.contains(m)) {
                System.out.println(n + " " + m);
            }
        }
    }
}
