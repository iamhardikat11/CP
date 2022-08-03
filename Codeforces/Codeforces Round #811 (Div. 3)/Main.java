import java.util.*;
import java.lang.*;

public class Main
{
    static int n;
    static int dp[] = new int[1e5+2], tl;
    static String t;
    static String a[] = new String[n];
static int find(int idx)
{
    if(idx==tl)
        return dp[idx]=0;
    if(dp[idx]!=1e5)
        return dp[idx];
    int op = 1e5;
    for(int i=0;i<n;i++)
    {
        if(idx+a[i].length-1<tl && t.substr(idx,a[i].length)==a[i])
            {
                for(int k=1;k<=a[i].length;k++)
                {
                    ops = min(ops,1+f(idx+k));
                }
            }
    }
    return dp[idx]=ops;
}
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        for(int i=0;i<N;i++) dp[i] = 1e5;
        while (tc-- > 0)
        {
            t = sc.nextInt();
            n = sc.nextInt();

        }
        int n = scn.nextInt();
        int a[] = new int[n];
        for(int i=0;i < n; i++) a[i] = sc.next();
        int res = find(0);
        if(res==1e5)
            System.out.println(-1);
        else
        {
            System.out.println(res);
            int[][] path = new int[n][2];
            int curr = res;
            int idx= 0;
            int e = 0;
            while(idx<tl)
            {
                bool m = false;
                for(int i=0;i<n;i++)
                {
                    if(idx+a[i].length-1<tl && t.substr(idx, a[i].length)==a[i])
                    {
                        for(int k=1;k<=a[i].length;k++)
                        {
                            if(dp[idx+k]+1==dp[idx])
                            {
                                m=true;
                                idx+=k;
                                path[e][0] = i;
                                path[e][1] = idx-k;
                                e++;
                                break;
                            }
                        }
                        if(m)
                            break;
                    }
                }
                for(int i=0;i<n;i++)
                    System.out.println(path[i][0] + " " + path[i][1]);
            }
        }
    }
}