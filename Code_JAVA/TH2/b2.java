package TH2;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class b2 {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream sc1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream sc2 = new ObjectInputStream(new FileInputStream("DATA2.in"));

        ArrayList<String> a = (ArrayList<String>) sc1.readObject();

        ArrayList<Integer> b = (ArrayList<Integer>) sc2.readObject();

        Set<String> ans = new TreeSet();

        for (String i:a) {
            for (Integer j:b){
                ans.add(i+j);
            }
        }

        for (String i : ans) {
            System.out.println(i);
        }
    }

}
