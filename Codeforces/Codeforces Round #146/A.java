import java.util.*;
import java.lang.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        ArrayList<Character> v = new ArrayList<>();
        v.add(s.charAt(0));
        for(int i=1;i<s.length();i++)
        {
            if(!v.contains(s.charAt(i)))
                v.add(s.charAt(i));
        }
        if(v.size()%2==0)
            System.out.println("CHAT WITH HER!");
        else
            System.out.println("IGNORE HIM!");
    }
}
