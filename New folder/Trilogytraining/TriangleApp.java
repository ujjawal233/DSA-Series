// Demonstration of Triangle (blueprint) and its OOP methods
public class TriangleApp {
    public static void main(String[] args) {
        // Example 1: Valid triangle
        Triangle.TriangleObject t1 = new Triangle.TriangleObject(3, 4, 5);
        System.out.println("--- Example 1 ---");
        t1.printDetails();

        // Example 2: Invalid triangle
        Triangle.TriangleObject t2 = new Triangle.TriangleObject(1, 2, 3);
        System.out.println("--- Example 2 ---");
        t2.printDetails();

        // Example 3: Another valid triangle
        Triangle.TriangleObject t3 = new Triangle.TriangleObject(5, 5, 6);
        System.out.println("--- Example 3 ---");
        t3.printDetails();
    }
}

