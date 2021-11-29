import java.io.*;
import java.util.*;
import java.lang.*;
public class Main {
    public static boolean isPrime(long a)
    {
        for(int i=3;i<=Math.sqrt(a);i++)
        {
            if(a%i==0)
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        try
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
            {
                long m = sc.nextLong();
                long n = sc.nextLong();
                if(m<=2)
                {
                    System.out.println("2");
                    m = 3;
                }
                m = (m%2==0)?m+1:m;
                for(long i=m;i<=n;i+=2)
                {
                    if(isPrime(i))
                        System.out.println(i);
                }
                System.out.println();

            }
        }
        catch (Exception e)
        {
            return;
        }

    }
}
