import java.util.*;
import java.lang.Math.*;
public class Building_Pyramids
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        double i=1;
        if(N==1)
        {
          System.out.println(1);
          return;
        }
        while(true)
        {
            int M =  ((int)(4*Math.pow(i,3)-i))/3;
            if(M>=N)
             break;
            i++;
        }
        System.out.println((int)(i-1));
        in.close();
    }
}