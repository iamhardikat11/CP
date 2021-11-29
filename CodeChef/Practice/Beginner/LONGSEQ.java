import java.io.*;
import java.util.*;

public class Main
{
     public static int count(String s,char ch)
     {
          int c = 0;
          for(int i=0;i<s.length();i++)
          {
               if(s.charAt(i)==ch)
                c++;
          }
          return c;
     }
	public static void main(String[] args) throws IOException
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=1;i<=t;i++)
		{
		     String s = sc.next();
		     if(count(s,'1')==1 || count(s,'0')==1)
		      System.out.println("Yes");
		     else 
		      System.out.println("No");
		}
	}
}
