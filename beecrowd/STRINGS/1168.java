import java.util.*;
import java.io.*;
import java.lang.*;
public class Main {
    public static int solve(String a)
    {
        int c = 0;
        int[] arr = {6,2,5,5,4,5,6,3,7,6};
        for(int i=0;i<a.length();i++)
           c += arr[(int)a.charAt(i)-48];
        return c;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        while(N-->0)
        {
            String a = sc.next();
            System.out.println(solve(a)+" leds");
        }
    }
}
