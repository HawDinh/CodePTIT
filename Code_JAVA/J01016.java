import java.util.Scanner;

public class J01016 {
    
    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        String s = sc.nextLine();
        int dem = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '4' || s.charAt(i) == '7') {
                ++dem;
            }
        }
        if (dem == 4 || dem == 7) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }

    public static void main(String[] args) {
        int T = 1;
        while (T-- > 0) {
            testCase();
        }
    }
}
