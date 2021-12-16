import java.lang.*;
import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String a = sc.next();
        int a_count = 0;
        for(int i=0;i<n;i++)
        {
            if(a.charAt(i)=='A')
                a_count++;
        }
        if(n%2==0)
        {
            if (a_count == n / 2)
                System.out.println("Friendship");
            else if(a_count>n/2)
                System.out.println("Anton");
            else
                System.out.println("Danik");
        }
        else
        {
           if(a_count>n/2)
            System.out.println("Anton");
           else
            System.out.println("Danik");
        }

    }
}
