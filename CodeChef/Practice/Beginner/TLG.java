/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int lead = 0, one =1;
		int score_A=0,score_B=0;
		for(int i=1;i<=t;i++)
		{
		     int A,B;
		     A = sc.nextInt();
		     B = sc.nextInt();
		     score_A+=A;
		     score_B+=B;
		     if(score_A>score_B)
		     {
		          if((score_A-score_B)>lead){
		          lead = score_A-score_B;
		          one = 1;
		          }
		     }
		     else if(score_B>score_A)
		     {
		          if(score_B-score_A>lead){
		          lead = score_B-score_A;
		          one = 2;
		          }
		     }
		}
		System.out.println(one+" "+lead);
	}
}
