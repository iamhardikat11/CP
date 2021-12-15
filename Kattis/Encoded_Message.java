import java.lang.*;
import java.util.*;
import java.io.*;
public class Encoded_Message {
    public static void solve(String s)
    {
        int n = (int) Math.sqrt(s.length());
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<n;j++)
                System.out.print(s.charAt(i+j*n));
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n-->0)
        {
            String s = sc.next();
            solve(s);
        }
    }
}