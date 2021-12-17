import java.io.*;
import java.util.*;
import java.lang.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int sum = 0;
        for(int i=0;i<=s.length()-2;i++)
        {
           if(s.charAt(i)==s.charAt(i+1))
               sum += (s.charAt(i)-48);
        }
        if(s.charAt(s.length()-1)==s.charAt(0))
            sum += (s.charAt(0)-48);
        System.out.println(sum);
    }
}
