import java.util.*;
import java.lang.*;
import java.io.*;
public class MISSP
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        while(T-->0)
        {
            int N = in.nextInt();
            int[] arr = new int[(N+1)/2];
            for(int i=0;i<N;i++)
            {
                int a = in.nextInt();
                arr[a-1]++; 
            }
            for(int i=0;i<(N+1)/2;i++)
            {
                if(arr[i]==1)
                {
                    System.out.println(i+1);
                    break;
                }
            }
        }
    }
}
