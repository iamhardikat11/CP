import java.util.*;
import java.math.*;
public class Prime_Number_Generation {
    public static int solve(int N)
    {
       BigInteger store = new BigInteger("2");
       if(N==1)
           return store.intValueExact();
       else
       {
           int count=1;
           while(count<N)
           {
               store = store.nextProbablePrime();
               count++;
           }
           return store.intValueExact();
       }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int N = sc.nextInt();
            System.out.print(solve(N)+" ");
        }
    }
}
