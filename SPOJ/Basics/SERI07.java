import java.lang.*;
import java.io.*;
import java.math.BigInteger;
import java.util.*;
public class SERI07 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while(tc-->0)
        {
            int N = sc.nextInt();
            BigInteger a = new BigInteger("2");
            BigInteger b = a.nextProbablePrime();
            BigInteger c = b.nextProbablePrime();
            for(int i=1;i<=N;i++)
            {
                System.out.print(a.multiply(b).add(c)+" ");
                a = c.nextProbablePrime();
                b = a.nextProbablePrime();
                c = b.nextProbablePrime();
            }
            System.out.println();
        }
    }
}
