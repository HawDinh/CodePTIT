import java.util.*;

class Rectangle {
    double width;
    double height;
    String color;

    public Rectangle(double width, double height, String color) {
        this.width = width;
        this.height = height;
        this.color = color;
    }

    public double getWidth() {
        return width;
    }

    public double getHeight() {
        return height;
    }

    public String getColor() {
        return color.substring(0,1).toUpperCase() + color.substring(1).toLowerCase();
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public double findArea() {
        return this.width * this.height;
    }
    
    public double findPerimeter() {
        return (this.width + this.height) * 2;
    }

    @Override
    public String toString() {
        return String.format("%d %d %s",(int) findPerimeter(), (int) findArea(), getColor());
    }
}

public class J04002 {

    public static Scanner sc = new Scanner(System.in);

    public static void testCase() {
        double w = sc.nextDouble();
        double h = sc.nextDouble();
        String c = sc.next();

        Rectangle rec = new Rectangle(w, h, c);

        if (w > 0 && h > 0) {
            System.out.println(rec);
        }
        else {
            System.out.println("INVALID");
        }
    }

    public static void main(String[] args) {
        int t = 1; 
        while (t-- > 0) {
            testCase();
        }
    }
}
