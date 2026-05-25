public class arraysoffloats {
    public static void main(String[] args) {
        float arr[] = {1.5f, 2.3f, 3.7f, 4.1f, 5.6f};
        System.out.println("Array of floats:");
        int size = arr.length; 
        // array length is determined using the length property
        System.out.println("Size of the array: " + size);
        for (float num : arr) {
            System.out.println(num);
        }
    }
}