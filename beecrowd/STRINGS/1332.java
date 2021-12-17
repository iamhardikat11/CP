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
            if(a.length()==5)
                System.out.println("3");
            else
            {
                if((a.charAt(0)=='o' && a.charAt(1)=='n')|| (a.charAt(1)=='n' && a.charAt(2)=='e') || (a.charAt(0)=='o' && a.charAt(2)=='e'))
                    System.out.println("1");
                else
                    System.out.println("2");
            }
        }
    }
}
