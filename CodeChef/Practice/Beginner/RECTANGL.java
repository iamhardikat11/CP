/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class RECTANGL
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=1;i<=t;i++)
		{
		     int []arr = new int[4];
		     for(int j=0;j<4;j++)
		      arr[j] = sc.nextInt();
		     Arrays.sort(arr);
		     if(arr[0]==arr[1] && arr[2]==arr[3])
		      System.out.println("YES");
		     else
		      System.out.println("NO");
		}
	}
}
