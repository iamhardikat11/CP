import java.util.*;
import java.lang.*;
import java.io.*;
public class Matching_Brackets
{
    public static String manip(String s)
    {
        StringBuilder n = new StringBuilder();
        for(int i=0;i<s.length();i++)
        {
            switch(s.charAt(i))
            {
                case '[',']','{','}','(',')','<','>' -> n.append(s.charAt(i));
            }
        }
        return n.toString();
    }
    public static int check(String s)
    {
        ArrayList<String> open = new ArrayList<String>();
        if(s.charAt(0)==')' || s.charAt(0)=='>' || s.charAt(0)=='}' || s.charAt(0)==']')
            return 0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='{' || s.charAt(i)=='<' || s.charAt(i)=='(' || s.charAt(i)=='[')
                open.add(s.substring(i,i+1));
            else
            {
                if(open.size()!=0) {
                    switch (s.charAt(i)) {
                        case ')' -> {
                            if (!open.get(open.size() - 1).equals("("))
                                return 0;
                            else
                                open.remove(open.size() - 1);
                        }
                        case ']' -> {
                            if (!open.get(open.size() - 1).equals("["))
                                return 0;
                            else
                                open.remove(open.size() - 1);
                        }
                        case '>' -> {
                            if (!open.get(open.size() - 1).equals("<"))
                                return 0;
                            else
                                open.remove(open.size() - 1);
                        }
                        case '}' -> {
                            if (!open.get(open.size() - 1).equals("{"))
                                return 0;
                            else
                                open.remove(open.size() - 1);
                        }
                    }
                }
                else
                    return 0;
            }
        }
        if(open.size()!=0)
            return 0;
        return 1;

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String s = sc.nextLine();
        while (t-->0)
        {
            s = sc.nextLine();
            s = manip(s);
            System.out.print(check(s)+" ");
        }

    }
}
