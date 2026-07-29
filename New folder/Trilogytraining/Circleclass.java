// write a class to create a circle to behaviour and area of circle.
public class Circleclass {
    static class Circle {
        int r;
        void area() {
            System.out.println("Area: " + (3.14 * r * r));
        }
    }

    public static void main(String[] args) {
        Circle c = new Circle();
        c.r = 5;
        c.area();
    }
}