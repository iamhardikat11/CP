import java.awt.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;
import java.util.*;
public class Main
{
    public static BigInteger solve(String s)
    {
        int []arr = new int[3];
        arr[0] = Integer.parseInt(s.substring(0,s.indexOf('x')));
        arr[1] = Integer.parseInt(s.substring(s.indexOf('x')+1,s.lastIndexOf('x')));
        arr[2] = Integer.parseInt(s.substring(s.lastIndexOf('x')+1));
        Arrays.sort(arr);
        String A = Integer.toString(2*(arr[0]+arr[1])+arr[0]*arr[1]*arr[2]);
        return new BigInteger(A);
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s = "";
        BigInteger total = new BigInteger("0");
        while(true)
        {
            s = sc.next();
            if(!s.equals("0"))
            {
                total = total.add(solve(s));
            }
            else
                break;
        }
        System.out.println(total);
    }
}
