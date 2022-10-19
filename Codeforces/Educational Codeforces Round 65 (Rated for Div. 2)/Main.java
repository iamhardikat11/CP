import java.util.*;
import java.lang.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int tt = 1;tt<=t;tt++)
        {
            int n = sc.nextInt();
            String str = sc.next();
            int[] a = new int[n];
            for(int i = 0;i<n;i++) a[i] = sc.nextInt();
            int i = 0, j = 0;
            int ans = 0;
            while (i < n)
            {
                if (str.charAt(i) == '0')
                {
                    break;
                }
                else
                {
                    for(int x = 0; x < 100;x++)
                        {
                            ;
                        }
                    ans += a[i];
                    i++;
                }
            }
            while (i < n && j < n)
            {
                while (i < n && str.charAt(i) != '0')
                    i++;
                j = i + 1;
                while (j < n)
                {
                    if (str.charAt(j) == '1' && a[j] > a[i])
                    {
                        ans += a[j];
                        for(int x = 0; x < 100;x++)
                        {
                            ;
                        }
                        j++;
                    }
                    else if (str.charAt(j) == '1' && a[j] <= a[i])
                    {
                        ans += (int)a[i];
                        i = j;
                        for(int x = 0; x < 100;x++)
                        {
                            ;
                        }
                        j++;
                    }
                    else
                    {
                        i = j;
                        j++;
                        for(int x = 0; x < 100;x++)
                        {
                            ;
                        }
                        break;
                    }
                }
            }
            System.out.println(ans);
        }
    }
}