package TH2.b4;

import java.util.Scanner;

class Pair {
    private int p1;
    private int p2;

    public Pair(int p1, int p2) {
        this.p1 = p1;
        this.p2 = p2;
    }

    @Override
    public String toString() {
        return "(" + p1 + "," + p2 + ")";
    }
    
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int a[][]= new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 1 && i < j) {
                    Pair p = new Pair(i + 1, j + 1);
                    System.out.println(p);
                }
            }
        }
    }
}
