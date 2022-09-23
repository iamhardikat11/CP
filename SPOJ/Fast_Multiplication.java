import java.util.*;
import java.lang.*;
import java.math.*;
public class Fast_Multiplication
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            BigInteger a = new BigInteger("0");
            a = sc.nextBigInteger();
            BigInteger b = new BigInteger("0");
            b = sc.nextBigInteger();
            System.out.println(a.multiply(b));
        }
    }
}