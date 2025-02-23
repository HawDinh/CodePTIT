import java.io.*;
import java.util.*;

public class b5 {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream sc = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> a = (ArrayList<String>) sc.readObject();

        //ArrayList <String> a = new ArrayList<>(Arrays.asList("hi","1223","hello","3"));

        Set <Integer> st = new TreeSet<>();

        for ( String x:a) {
            String tmp[] = x.split("\\s+");
            for (String i:tmp) {
                try {
                    Integer num = Integer.parseInt(i);
                    st.add(num);
                } catch (IllegalArgumentException e) {
                    continue;
                }
            }
        }
        for (Integer i:st) {
            System.out.println(i);
        }
    }
}
