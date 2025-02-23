import java.util.*;

public class j {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        String s = sc.nextLine();
        Stack<Character> st = new Stack<>();

        for (int j = 0; j < s.length(); j++) {
            char i = s.charAt(j);
            if (i == '(' || i == '[' || i == ']' || i== ')') {
                if (!st.empty() && i ==')' && st.peek() == '(') st.pop();
                else if (!st.empty() && i ==']' && st.peek() == '[') st.pop();
                else st.push(i);
            }
    }
    
    if (st.empty()) System.out.println("YES");
    else System.out.println("NO");
}

    public static void main(String[] args) {
        int t = Integer.parseInt(sc.nextLine());
        
        while (t-- > 0) {
            testCase();
        }
    }
}
/*
3
[ graph ] ( binary tree ).
Dynamic programming )( devide and conquer.
([ (([( [ ] ) ( ) (( ))] )) ]).
 */

