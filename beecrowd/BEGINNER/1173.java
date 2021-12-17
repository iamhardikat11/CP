import java.lang.*;
import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=0;i<10;i++)
        {
           System.out.println("N["+i+"] = "+N);
           N *=2;
        }
    }
}
