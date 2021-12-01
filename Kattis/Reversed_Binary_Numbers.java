import java.lang.*;
import java.io.*;
import java.util.*;
public class Reversed_Binary_Numbers
{
    public static void solve(long N)
    {
        String s = Long.toBinaryString(N);
        StringBuilder s_ = new StringBuilder(s);
        s_ = s_.reverse();
        long pow = 1;
        s = s_.toString();
        N = 0;
        for(int i=s.length()-1;i>=0;i--)
        {
            N+=(s.charAt(i)-48)*pow;
            pow*=2;
        }
        System.out.println(N);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long N = sc.nextLong();
        solve(N);
    }
}
