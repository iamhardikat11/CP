//Link:-https://open.kattis.com/problems/simpleaddition
import java.util.Scanner;
import java.math.BigInteger;
public class Simple_Addition 
{
    public static void main(String[] args)
    {
        BigInteger a = new BigInteger("0");
        BigInteger b = new BigInteger("0");
        Scanner in = new Scanner(System.in);
        a = in.nextBigInteger();
        b = in.nextBigInteger();
        System.out.println(a.add(b));
    }
}