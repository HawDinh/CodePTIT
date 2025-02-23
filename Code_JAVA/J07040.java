import java.io.*;
import java.util.*;

public class J07040 {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("NHIPHAN.in"));
        List<String> list1 = (List<String>) ois.readObject();
        list1.replaceAll(String::toLowerCase);
        Set<String> st = new HashSet<>();
        
        for (String i : list1) {
            String[] a = i.split("\\s+");

            for (String x:a) {
                st.add(x.toLowerCase());
            }
        }

        Set<String> ans = new LinkedHashSet<>();

        Scanner sc = new Scanner(new File("VANBAN.in"));
        while(sc.hasNext()) {
            String[] words = sc.nextLine().split("\\s+");

            for (String s : words) {
                if (!s.isEmpty()) {
                    ans.add(s.toLowerCase());
                }
            }
        }

        ans.retainAll(st);

        for (String i : ans) {
            System.out.println(i);
        }
    }
}
