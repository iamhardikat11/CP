import java.util.*;
public class main
{
    public static Char find(long[][] v, string s, int k)
    {
        if(k<s.length()) return s[k];
        else
        {
            for(int i=0;i<v.length;i++)
            {
                if(v[i][0]<=k && v[i][1]>=k)
                {
                    return find(v,s,v[i][2]+k-v[i][0]);
                }
            }
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {   int n = sc.nextInt();
            long c,q;
            c = sc.nextLong();
            q = sc.nextLong();
            String s = sc.next();
            long[][] v = new long[n][4];
            long pos = n;
            for(int i=0;i<n;i++)
            {
                long l,r;
                l = sc.nextLong();
                r = sc.nextLong();
                l--;
                r--;
                v[i][0] = pos;
                v[i][1] = pos+r-l;
                v[i][2] = l;
                v[i][3] = r;
                pos+=r-l+1;
            }
            while(q-->0)
            {
                long k = sc.nextLong();
                System.out.println(find(v,s,k));
            }
        }
    }
}