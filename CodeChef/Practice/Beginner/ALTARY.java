import java.io.*;
import java.util.*;

public class ALTARY
{
     public static int solve(long[] l,int N,int j)
     {
          int c = 1;
          if(j==N-1) 
          for(int i=j;i<N;i++)
          {
               if(l[i]*l[i+1]<0)
               {
                    i++;
                    c++;
               }
               else
                break;
          }
          return c;
     }
	public static void main(String[] args) throws IOException
	{
		   Scanner sc = new Scanner(System.in);
		   int T = sc.nextInt();
		   while(T-->0)
		   {
		        int N = sc.nextInt();
		        long[] arr = new long[N];
		        for(int j=0;j<N;j++)
		         arr[j] = sc.nextLong();
		        for(int i=0;i<N-1;i++)
		         System.out.print(solve(arr,N,i)+" ");
		        System.out.println(1);
		        
		   }
		}
	}
