import java.util.*;
import java.io.*;
import java.lang.*;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        while(N-->0)
        {
            String a = sc.next();
            String b = sc.next();
            StringBuilder v = new StringBuilder();
            for(int i = 0;i<Math.min(a.length(),b.length());i++)
            {
                v.append(a.charAt(i));
                v.append(b.charAt(i));
            }
            v.append(a.length()>b.length()?a.substring(b.length(), a.length()):b.substring(a.length(), b.length()));
            System.out.println(v);
        }
    }
}
