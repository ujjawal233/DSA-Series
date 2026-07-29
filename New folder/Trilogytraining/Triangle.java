// Triangle blueprint using OOP concepts (outer class + inner class)
public class Triangle {

    // Inner class representing a triangle instance
    public static class TriangleObject {
        private double a;
        private double b;
        private double c;

        public TriangleObject(double a, double b, double c) {
            this.a = a;
            this.b = b;
            this.c = c;
        }

        public boolean isValid() {
            return checkValidity(a, b, c);
        }

        public boolean isValidTriangle() {
            return isValid();
        }

        public double perimeter() {
            if (!isValid()) {
                return Double.NaN;
            }
            return a + b + c;
        }

        // Heron's formula for area: sqrt(s(s-a)(s-b)(s-c))
        public double area() {
            if (!isValid()) {
                return Double.NaN;
            }
            double s = perimeter() / 2.0;
            return Math.sqrt(s * (s - a) * (s - b) * (s - c));
        }

        public static boolean checkValidity(double a, double b, double c) {
            // Basic checks: positive sides
            if (a <= 0 || b <= 0 || c <= 0) return false;

            // Triangle inequality
            return (a + b > c) && (a + c > b) && (b + c > a);
        }

        public void printDetails() {
            if (!isValid()) {
                System.out.println("Invalid triangle sides: " + a + ", " + b + ", " + c);
                return;
            }
            System.out.println("Triangle sides: " + a + ", " + b + ", " + c);
            System.out.println("Perimeter: " + perimeter());
            System.out.println("Area (Heron's formula): " + area());
        }
    }
}

