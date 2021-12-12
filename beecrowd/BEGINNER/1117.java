import java.io.*;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double[] arr = new double[2];
        double a = sc.nextDouble();
        int count = 0;
        int p = 0;
        if(a>=0.0 && a<=10.0)
        {
          count++;
          arr[0] = a;
        }
        else
            p++;
        while(count!=2)
        {
            a = sc.nextDouble();
            if(a>=0.0 && a<=10.0)
            {
                if(count==0)
                    arr[0] = a;
                if(count==1)
                    arr[1] = a;
                count++;
            }
            else
                p++;
        }
        for(int i=1;i<=p;i++)
            System.out.println("nota invalida");
        System.out.println("media = "+Math.ceil(100*((arr[0]+arr[1])/2))/100);
    }
}
