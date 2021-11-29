import java.io.*;
import java.util.*;
import java.lang.*;
public class Main
{
    public static void main(String args[]) throws IOException
    {
        try
        {
          Scanner sc = new Scanner(System.in);
          int t = sc.nextInt();
          while(t-->0)
          {
              int R = sc.nextInt();
              int C = sc.nextInt();
              for(int i=1;i<=R;i++)
              {
                  for(int j=1;j<=C;j++)
                  {
                      if(i==1 || i==R || j==1 || j==C)
                          System.out.print("*");
                      else
                          System.out.print(".");
                  }
                  System.out.println();
              }
              System.out.println();
          }
        }
        catch (Exception e)
        {
            return;
        }
    }
}
