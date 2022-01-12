import java.util.*;
import java.lang.*;
import java.io.*;
public class main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        ArrayList<Character> v = new ArrayList<>();
        for(int i=0;i<a.length();i++)
        {
            if(a.charAt(i)=='(')
            {
                v.add('(');
            }
            if(a.charAt(i)==')')
            {
                if(v.size()!=0)
                {
                    if(v.get(v.size()-1)=='(') {
                        v.remove(v.size() - 1);
                        continue;
                    }
                }
                v.add(')');
            }
        }
        System.out.println(v.size());
    }
}
