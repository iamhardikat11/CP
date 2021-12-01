import java.util.*;
import java.io.*;
import java.lang.*;
public class Homework {
    public static ArrayList<String> manip(String s)
    {
        ArrayList<String> v = new ArrayList<>();
        while(s.length()!=0){
            if (s.indexOf(';') != -1)
            {
                v.add(s.substring(0, s.indexOf(';')));
                s = s.substring(s.indexOf(';') + 1);
            }
            else {
                v.add(s);
                break;
            }
        }
        return v;
    }
    public static int count(ArrayList<String> v)
    {
        int count = 0;
        for (String s : v) {
            if (s.contains("-"))
            {
                count += Integer.parseInt(s.substring(s.indexOf('-') + 1)) - Integer.parseInt(s.substring(0, s.indexOf('-'))) + 1;
            }
            else
                count += 1;
        }
        return count;
    }
    public static int freq(String s)
    {
        int count = 0;
        if(!s.contains(";"))
            return 1;
        for(int i=0;i<s.length();i++)
            if(s.charAt(i)==';')
                count++;
        return count+1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        if(!s.contains("-") && !s.contains(";"))
            System.out.println("1");
        else if(!s.contains(";"))
        {
            System.out.println(Integer.parseInt(s.substring(s.indexOf('-') + 1)) - Integer.parseInt(s.substring(0, s.indexOf('-'))) + 1);
        }
        else if(!s.contains("-"))
        {
            System.out.println(freq(s)+" ");
        }
        else {
            ArrayList<String> v;
            v = manip(s);
            System.out.println(count(v));
        }

    }
}
