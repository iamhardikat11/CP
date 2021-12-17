import java.util.*;
import java.io.*;
import java.lang.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        for(int i = 0 ;i<10;i++)
            arr[i] =sc.nextInt();
        for(int i = 0;i<10;i++)
        {
            if(arr[i]<=0)
                System.out.println("X["+i+"] = 1");
            else
                System.out.println("X["+i+"] = "+arr[i]);
        }
    }
}
