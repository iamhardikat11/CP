/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.math.*;
class Codechef
{
    public static BigInteger factorial(BigInteger N)
    {
        BigInteger prod = new BigInteger("1");
       for(int i=1;i<=N.intValueExact();i++)
           prod = prod.multiply(new BigInteger(Integer.toString(i)));
       return prod;
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=1;i<=t;i++)
        {
            int N = sc.nextInt();
            System.out.println(factorial(new BigInteger(Integer.toString(N))));
        }
    }
}
