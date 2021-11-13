import java.util.*;
public class Binary_Search
{
    public static double equation(double a, double b, double c, double d, double x)
    {
        return a*x+b*Math.pow(x,1.5)-c*Math.pow(Math.E,-x/50.0)-d;
    }
    public static double solve(double a, double b, double c, double d)
    {
        ArrayList<Double> v = new ArrayList<Double>();
        v.add(0.0);
        v.add(100.0);
        v.add(50.0);
        double value = equation(a,b,c,d,v.get(2));
        while(Math.abs(value)>=1E-7)
        {
            if(value>0)
            {
                v.add((v.get(0)+v.get(2))/2.0);
                v.remove(1);
            }

            else
            {
                v.add((v.get(1)+v.get(2))/2.0);
                v.remove(0);
                ArrayList<Double> v_ = new ArrayList<Double>();
                v_.add(v.get(1));
                v_.add(v.get(0));
                v_.add(v.get(2));
                v = v_;
            }
            value = equation(a,b,c,d,v.get(2));
        }
        return v.get(2);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=1;i<=t;i++)
        {
            double a,b,c,d;
            a = sc.nextDouble();
            b = sc.nextDouble();
            c = sc.nextDouble();
            d = sc.nextDouble();
            System.out.print(solve(a,b,c,d)+" ");
        }
    }
}
