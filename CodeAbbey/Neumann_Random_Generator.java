import java.math.BigInteger;
import java.util.*;
public class Neumann_Random_Generator {
    public static boolean done(ArrayList<Integer> v)
    {
        int N = v.size()-1;
        return v.indexOf(v.get(N)) != v.lastIndexOf(v.get(N));
    }
    public static int solve(int N)
    {
        ArrayList<Integer> v = new ArrayList<Integer>();
        BigInteger n = new BigInteger(Integer.toString(N));
        v.add(n.intValue());
        int i=0;
        while(!done(v)){
            n = n.pow(2).divide(new BigInteger("100")).mod(new BigInteger("10000"));
            v.add(n.intValue());
            i++;
        }
        return i;
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
