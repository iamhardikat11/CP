import java.math.BigInteger;
import java.util.*;
public class Fibonacci_Divisibilty {
    public static int solve(int M)
    {
        BigInteger a = new BigInteger("0");
        BigInteger b = new BigInteger("1");
        BigInteger c = a.add(b);
        BigInteger div = new BigInteger(Integer.toString(M));
        int i=0;
        while (!b.remainder(div).toString().equals("0"))
        {
            i++;
            a=b;
            b=c;
            c=a.add(b);
        }
       return (i+1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=1;i<=t;i++)
        {
            int M = sc.nextInt();
            System.out.print(solve(M)+" ");
        }
    }

}
