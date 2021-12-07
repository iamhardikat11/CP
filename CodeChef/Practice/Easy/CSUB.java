import java.io.*;
import java.util.*;

public class Main
{
     public static int count(String s,int N)
     {
          int c = 0;
          for(int i=0;i<s.length();i++)
           if(s.charAt(i)=='1')
            c++;
          return c;
     }
	public static void main(String[] args) throws IOException
	{
	     Scanner sc = new Scanner(System.in);
		try{
			//Your Solve
			int t = sc.nextInt();
			while(t-->0)
		     {
		          int N = sc.nextInt();
		          String s = sc.next();
		          int c = count(s,N);
		          int p = c;
		          for(int i=0;i<N;i++)
		          {
		               if(s.charAt(i)=='1')
		               {
		                    c--;
		                    p+=c;
		               }
		           }
		           System.out.println(p);
		          }
		     }
		     catch(Exception e){
			return;
		}
	}
}
