import java.util.*;
import java.lang.*;
import java.io.*;
public class Sum_of_LCM{
public class Solution {
    public static long gcd(long a,long b)
    {
        if(a==0)
            return b;
        else if(a>b)
            return gcd(b,a%b);
        return gcd(b%a,a);
    }
	public static long lcmSum(long n) {
		// Write your code here.
        long sum = 0;
        for(long i=1;i<=n;i++)
            sum+=(i*n)/gcd(i,n);
        return sum;
    }
 }
}
