import java.util.*;
import java.lang.*;
public class Solution
{
    public static boolean isPrime(long n)
    {
        for(long j=2;j<=(long)Math.sqrt(n);j++)
        {
            if(n%j==0)
                return false;
        }
        return true;
    }
    public static long nextPrime(long n)
    {
        n++;
       while(!isPrime(n))
           n++;
       return n;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();

        for(long i=1;i<=t;i++)
        {
            long N = sc.nextLong();
            long p=2;
            while(N!=1) {
                while (N % p == 0) {
                    N = N / p;
                    System.out.print(p);
                    if(!isPrime(N*p))
                        System.out.print("*");
                }
                p = nextPrime(p);
            }
            System.out.print(" ");
        }
    }
}
