import java.lang.*;
import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        int c = 0;
        while(T-->0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            if(b-a>=2)
             c++;
        }
        System.out.println(c);
    }
}
