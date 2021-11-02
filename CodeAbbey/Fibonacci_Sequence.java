import java.util.*;
import java.math.BigInteger;
public class Fibonacci_Sequence{
    public static int index(BigInteger x)
    {
         BigInteger a = new BigInteger("0");
         BigInteger b = new BigInteger("1");
         BigInteger result = a.add(b);
         int i=2;
         while(true) 
         {
             if(result.compareTo(x)==0)
             {
                 return i;
             }
             else
             {
                 a=b;
                 b=result;
                 result=a.add(b);
             }
             i++;
         }

    }
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i=1;i<=n;i++)
        {
            
            BigInteger x = new BigInteger(s);
            System.out.print(index(x)+" ");
        }
        in.close();
    }
}