//Link:-https://open.kattis.com/problems/detaileddifferences
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Detailed_Differences
{
	public static void main (String[] args) throws java.lang.Exception
	{
        int t;
        Scanner in = new Scanner(System.in);
        t = in.nextInt();
        while(t>0)
        {
            String a = in.next();
            String b = in.next();
            System.out.println(a);
            System.out.println(b);
            for(int i = 0; i < a.length(); i++)
            {
                if(a.charAt(i) != b.charAt(i))
                 System.out.print("*");
                else
                 System.out.print(".");
            }
            System.out.println("\n");
            t--;
        }
    }
}
