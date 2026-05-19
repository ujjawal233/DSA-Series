import java.util.*;

public class clean {
    public static void main(String[] args) {
        int oddSum = 0;
        int evenSum = 0;
        for (int i = 1; i <= 100; i++) {
            if (i % 2 == 0) {
                evenSum += i;
            } else {
                oddSum += i;
            }
        }
        System.out.println("Sum of odd numbers: " + oddSum);
        System.out.println("Sum of even numbers: " + evenSum);
    }
}