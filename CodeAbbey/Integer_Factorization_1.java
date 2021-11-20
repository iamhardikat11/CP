import java.util.*;
import java.lang.*;
public class Solution
{
    public static boolean isPrime(int n)
    {
        for(int j=2;j<=(int)Math.sqrt(n);j++)
        {
            if(n%j==0)
                return false;
        }
        return true;
    }
    public static int nextPrime(int n)
    {
        n++;
       while(!isPrime(n))
           n++;
       return n;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for(int i=1;i<=t;i++)
        {
            int N = sc.nextInt();
            int p=2;
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
