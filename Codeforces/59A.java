import java.lang.*;
import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int c = 0;
        for(int i = 0;i<s.length();i++)
            if(s.charAt(i)>=65 && s.charAt(i)<=90)
                c++;
        if(c>s.length()/2)
            System.out.println(s.toUpperCase());
        else
            System.out.println(s.toLowerCase());
    }
}
