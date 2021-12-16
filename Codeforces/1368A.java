import java.lang.*;
import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-->0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            int c = 0;
            while(a<=n && b<=n)
            {
                if(a<b)
                    a+=b;
                else
                    b+=a;
                c++;
            }
            System.out.println(c);
        }
    }
}
