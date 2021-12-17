import java.lang.*;
import java.io.*;
import java.math.BigInteger;
import java.util.*;
public class Main {
    public static String solve(int N)
    {
        if(N==0 || N==1)
            return Integer.toString(N);
        ArrayList<BigInteger> v = new ArrayList<>(N+1);
        BigInteger a = new BigInteger("0");
        BigInteger b = new BigInteger("1");
        v.add(a);
        v.add(b);
        while(v.size()<=N)
        {
           BigInteger c = a.add(b);
           v.add(c);
           a = b;
           b = c;
        }
        return v.get(v.size()-1).toString();
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-->0)
        {
           int N = sc.nextInt();
           System.out.println("Fib("+N+") = "+solve(N));
        }
    }
}
