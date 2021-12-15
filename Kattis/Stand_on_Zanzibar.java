import java.lang.*;
import java.io.*;
import java.util.*;
public class Stand_on_Zanzibar {
    public static int solve(ArrayList<Integer> v)
    {
        int sum = 0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v.get(i+1)-2*v.get(i)>0)
                sum+=v.get(i+1)-2*v.get(i);
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0)
        {
            ArrayList<Integer> v = new ArrayList<>();
            int n = sc.nextInt();
            while (n!=0)
            {
                v.add(n);
                n = sc.nextInt();
            }
            System.out.println(solve(v));

        }
    }
}
