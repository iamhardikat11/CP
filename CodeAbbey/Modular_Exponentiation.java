import java.util.Scanner;
public class Modular_Exponentiation
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 1 ; i <= t ; i++)
        {
            int a = in.nextInt();
            int b = in.nextInt();
            int m = in.nextInt();
            long prod=1;
            for (int j =1;j<=b;j++)
            {
                prod=(prod*a)%m;
            }
            System.out.print(prod+" ");
        }
    }
}