import java.util.*;
import java.lang.*;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        int []a = new int[100002];
        while(t-->0)
        {
            int n,k,l;
            n = scn.nextInt();
            for(int m = n; m!=0;)
            {
                k = (int)(Math.sqrt(2*m-2));
                l = (int)Math.pow(k,2)-m+1;
                for(int i=m-1;i>=l;i--) a[i] = (int)Math.pow(k,2)-i;
                m=l;
            }
            for(int i=0;i<n;i++) System.out.print(a[i]+" ");
            System.out.println();
        }
        return;
    }
}