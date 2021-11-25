import java.util.*;
import java.lang.*;
import java.io.*;
public class Number_of_Rectangles_in_a_grid {
  
public static class Solution{
	public static long countRectangles(int m, int n)
	{
		// Write your code here.
          long prod = 1;
          prod = ((long)m*(long)(m+1)*(long)(n)*(long)(n+1))/4;
          return prod;
        }
	public static void main(String args[])
	{
	   Scanner sc = new Scanner(System.in);
	   int t = sc.nextInt();
	   while(t-->0)
	   {
		   int n = sc.nextInt();
		   int m = sc.nextInt();
		   System.out.println("%d\n",countRectangles(m,n));
	   }
	}	
  }
}
