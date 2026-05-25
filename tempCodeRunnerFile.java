import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = sc.nextInt();
    }
    sc.close();
    buildings(arr, n);
  }
  
  public static void buildings(int[] arr, int n) {
    // your code here
      int maxi = 0;
      for(int i=0;i<n;i++)
      {
          
          int a = arr[i];
          if(a > arr[i])
          {
              maxi = a;
}
          for(int j=maxi;j>a;j--)
          {
              System.out.println("*");
          }
          for(int k=0;k<7;k++)
          {
          System.out.print(" ");
          }
      }
    
  }
}