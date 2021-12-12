import java.math.BigInteger;
import java.util.*;
public class FCTRL2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int N = sc.nextInt();
            BigInteger n = new BigInteger("1");
            for(int i=2;i<=N;i++)
                n = n.multiply(new BigInteger(Integer.toString(i)));
            System.out.println(n.toString());
        }
    }
}

