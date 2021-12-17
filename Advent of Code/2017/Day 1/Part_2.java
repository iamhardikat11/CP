import java.io.*;
import java.util.*;
import java.lang.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int sum = 0;
        for(int i=0;i<=(s.length()/2-1);i++)
        {
            if(s.charAt(i)==s.charAt(i+s.length()/2))
                sum += (s.charAt(i)-48);
        }
//        for(int i = s.length()/2;i<=(s.length()-1);i++)
//        {
//            if(s.charAt(i)==s.charAt(i-s.length()/2))
//                sum += (s.charAt(i)-48);
//        }
        System.out.println(2*sum);
    }
}
