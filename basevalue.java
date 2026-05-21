public class basevalue {
    public static void main(String[] args) {
        int num = 12345;
        int digit = 3;
        int originalDigit = digit;
        int remainder = 0;

        while (digit > 0) {
            remainder = num % 10;
            digit--;
            num /= 10;
        }


        System.out.println("The base value is: " + (int)(remainder * Math.pow(10, originalDigit - 1)));
    }
}