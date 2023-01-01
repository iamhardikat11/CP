import java.util.*;
import java.lang.*;
import java.math.BigInteger;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        // m mod 2n
        BigInteger a = new BigInteger(String.valueOf(m));
        int k = 2;
        BigInteger b = new BigInteger(String.valueOf(k));
        b = b.pow(n);
        a = a.mod(b);
        System.out.println(a.toString());
    }
}