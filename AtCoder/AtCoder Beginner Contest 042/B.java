import java.lang.*;
import java.util.*;
import java.io.*;
public class Main {
    static Scanner sc = new Scanner(System.in);
    public static void input(String[] v,int N)
    {
        for(int i=0;i<N;i++)
            v[i] = sc.next();
    }
    public static void sort(String[] v,int N,int L)
    {
        for(int i=0;i<v.length;i++)
        {
            for(int j=v.length-1;j>i;j--)
            {
                if(v[i].compareTo(v[j])>0)
                {
                    String t = v[i];
                    v[i] = v[j];
                    v[j] = t;
                }
            }
        }
    }
    public static void main(String[] args)
    {
 
        int N = sc.nextInt();
        int L = sc.nextInt();
        String[] v = new String[N];
        input(v,N);
        sort(v,N,L);
        for (String s : v) System.out.print(s);
    }
}
