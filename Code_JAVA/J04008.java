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

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    public static double distance(Point a, Point b) {
        return Math.sqrt(Math.pow(a.x - b.x, 2) + Math.pow(a.y - b.y, 2));
    }

    public double distance(Point p) {
        return distance(this, p);
    }

    @Override
    public String toString() {
        return this.x + " " + this.y;
    }
}

public class J04008 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        Point a = new Point(sc.nextDouble(), sc.nextDouble());
        Point b = new Point(sc.nextDouble(), sc.nextDouble());
        Point c = new Point(sc.nextDouble(), sc.nextDouble());

        double x = Point.distance(a,b);
        double y = Point.distance(a,c);
        double z = Point.distance(b,c);

        if (x + y <= z || x + z <= y || y + z <= x) {
            System.out.println("INVALID");
        }
        else {
            double ans = x + y + z;
            System.out.printf("%.3f",ans);
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int t = sc.nextInt(); 
        while (t-- > 0) {
            testCase();
        }
    }
}
