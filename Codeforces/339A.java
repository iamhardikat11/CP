import java.lang.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        StringBuilder a = new StringBuilder();
        ArrayList<Character> v = new ArrayList<>();
        while(true)
        {
            if(s.indexOf('+')!=-1)
            {
                v.add(s.substring(0,s.indexOf('+')).charAt(0));
                s = s.substring(s.indexOf('+')+1);
            }
            else
            {
                v.add(s.charAt(0));
                break;
            }
        }
        Collections.sort(v);
        for(int i=0;i<v.size();i++)
        {
            if(i!=v.size()-1)
            {
                a.append(v.get(i));
                a.append('+');
            }
            else
                a.append(v.get(i));
        }
        System.out.println(a.toString());
    }
}
