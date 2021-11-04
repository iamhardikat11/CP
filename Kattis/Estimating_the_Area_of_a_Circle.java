/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Estimating
{
	public static void main (String[] args) throws java.lang.Exception
    {
       double r;
       double m,c;
       Scanner in = new Scanner(System.in);
       r = in.nextDouble();
       m = in.nextDouble();
       c = in.nextDouble();
       while(r!=0 && m!=0 && c!=0)
       {
          System.out.println(3.141592653*Math.pow(r,2)+" "+(4.0*r*r*(c/m)));
          r = in.nextDouble();
          m = in.nextDouble();
          c = in.nextDouble();
       }
    }
}
