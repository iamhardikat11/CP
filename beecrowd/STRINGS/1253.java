import java.util.*;
import java.io.*;
import java.lang.*;
public class Main {
    public static void solve(String a, int n)
    {
        StringBuilder v = new StringBuilder();
        for(int i=0;i<a.length();i++)
        {
            if((int)(a.charAt(i))>=65 && (int)(a.charAt(i))<=64+n)
                v.append((char)(a.charAt(i)+26-n));
            else
                v.append((char)(a.charAt(i)-n));
        }
        System.out.println(v);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        while(N-->0)
        {
            String a = sc.next();
            int n = sc.nextInt();
            solve(a,n);
        }
    }
}
