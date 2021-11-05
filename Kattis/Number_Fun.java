import java.util.*;
import java.lang.Math.*;
public class Number_Fun
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0;i<t;i++)
        {
            int a,b,c;
            a = in.nextInt();
            b = in.nextInt();
            c = in.nextInt();
            if(a+b==c || Math.abs(a-b)==Math.abs(c) || a*b==c || (double)a/(double)b==(double)c || (double)b/(double)a==(double)c)
             System.out.println("Possible");
            else 
             System.out.println("Impossible");
        }
    }
}