import java.util.*;
import java.lang.*;
import java.io.*;
public class public class Find_power_of_a_number_2
{
  
   static class Solution 
   {
	    public static long Pow(int X, int N) 
      {
        if(X==0 && N==0)
            return 1;
        else
              return (long)Math.pow(X,N);
	    }
     public static void main(String args[]) throws IOException
     {
       Scanner sc = new Scanner(System.in);
       int t = sc.nextInt();
       while(t-->0)
       {
        int X = sc.nextInt();
        int N = sc.nextInt();
        System.out.println(Pow(X,N));
       }
     }
   }

}
