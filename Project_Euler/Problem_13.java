import java.math.BigInteger;
import java.util.*;
public class Problem_13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger sum = new BigInteger("0");
        for(int i=0;i<100;i++)
        {
            BigInteger x = sc.nextBigInteger();
            sum = sum.add(x);
        }
        System.out.println(sum.toString().substring(0,10));
    }
}
