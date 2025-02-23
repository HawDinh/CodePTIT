import java.util.*;

class Time {
    int Gio;
    int Phut;
    int Giay;

    public Time(int gio, int phut, int giay) {
        Gio = gio;
        Phut = phut;
        Giay = giay;
    }

    @Override
    public String toString() {
        return String.format("%d %d %d", Gio, Phut, Giay);
    }
}

public class J05033 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        int n = sc.nextInt();
        List<Time> a = new ArrayList<>();
        
        while (n-- > 0) {
            a.add(new Time(sc.nextInt(), sc.nextInt(), sc.nextInt()));
        }

        a.sort((Time x, Time y) -> {
            if (x.Gio != y.Gio) {
                return x.Gio - y.Gio;
            }
            if (x.Phut != y.Phut) {
                return x.Phut - y.Phut;
            }
            return x.Giay - y.Giay;
        });

        for (Time x : a) {
            System.out.println(x);
        }
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
