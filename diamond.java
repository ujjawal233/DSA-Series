import java.util.Scanner;
public class HW1 {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int m = 1;
      int p = n;
      int len = 1;
      for(int i=1;i<n/2+1;i++)
      {
        for(int j=1;j<n+1-i;j++)
        {
                System.out.print(" " + " ");       
        }
        for(int j=0;j<m;j++)
        {
          if(j==0 || j==m-1 || j==m/2)
          {
                System.out.print("*" + " ");     
          }  
          else
          {
                System.out.print(" " + " ");     
          }
          
        }
        m+=2;
        System.out.println();
  }
  
  for(int sp=1;sp<=n/2;sp++)
        {
          System.out.print(" " + " ");
        }

  for(int a=0;a<n;a++)
        {
          System.out.print("*" + " ");
        }
        System.out.println();
    for(int i=1;i<=n/2;i++)
      {
        for(int j=1;j<=i+4;j++)
        {
                System.out.print(" " + " ");       
        }
        for(int j=p;j>=n/2-1;j--)
        {
          if(j==p || j==p/2+2 || j==n/2-1)
          {
                System.out.print("*" + " ");     
          }  
          else
          {
                System.out.print(" " + " ");     
          }
          
        }
        p-=2;
        System.out.println();
  }     
  
}
}