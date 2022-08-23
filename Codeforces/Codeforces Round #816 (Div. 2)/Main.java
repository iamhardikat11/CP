import java.util.*;
import java.lang.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int m = scn.nextInt();
        int[] arr = new int[n];
        int[] store = new int[n];
        for(int i=0;i<n;i++) {
            arr[i] = scn.nextInt();
            store[i] = 0;
        }
        while(m-->0)
        {
            int i,x,ans=0;
            i = scn.nextInt();
            x = scn.nextInt();
            arr[i-1] = x;
            for(int j=1;j<n;j++) 
                store[j] = arr[j-1]!=arr[j] ? store[j-1]+1 : store[j-1];
            for(int j=0;j<n;j++)
            {
                for(int k=j;k<n;k++)
                    ans+=store[k]-store[j]+1;
            }
            System.out.println(ans);
        }
    }    
}