
import java.text.*;
import java.util.*;

class Point {    
    double x;
    double y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public Point(Point p) {
        this.x = p.x;
        this.y = p.y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }
    
    public static double distance(Point p1, Point p2) {
        return Math.sqrt(Math.pow(p2.x - p1.x, 2) + Math.pow(p2.y - p1.y, 2));
    }
    
    public double distance(Point p) {
        return distance(this, p);
    }

    @Override
    public String toString(){
        return "(" + x + ", " + y + ")";
    }

}

public class J04001 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        Point p1 = new Point(sc.nextDouble(), sc.nextDouble());
        Point p2 = new Point(sc.nextDouble(), sc.nextDouble());
        
        double ans = Point.distance(p1,p2);

        System.out.printf("%.4f\n",ans);

    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
        }
    }
}
