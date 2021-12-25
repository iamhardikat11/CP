import java.io.*;
import java.util.*;

public class Main
{
     public static int solve(String s,int N)
     {
          int c = 0;
          for(int i=0;i<N;i++)
          {
               if(s.charAt(i)=='1')
                 c++;
          }
          c = Math.min(c,N-c);
          if(c==0)
           return 0;
          else 
           return c-1;
     }
	public static void main(String[] args) throws IOException
	{
		try{
			//Your Solve
			Scanner sc = new Scanner(System.in);
			int tc = sc.nextInt();
			while(tc-->0)
			{
			     int N = sc.nextInt();
			     String s = sc.next();
			     System.out.println(solve(s,N));
			}
		}catch(Exception e){
			return;
		}
	}
}
