import java.io.*;
import java.util.*;
import java.lang.*;
public class Forced_Choice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int P = sc.nextInt();
        int S = sc.nextInt();
        while(S-->0)
        {
            int m = sc.nextInt();
            int[] arr = new int[m];
            boolean flag = false;
            for(int i:arr)
            {
                i = sc.nextInt();
                if(i==P)
                    flag = true;
            }
            if(flag)
                System.out.println("KEEP");
            else
                System.out.println("REMOVE");
        }
    }
}
