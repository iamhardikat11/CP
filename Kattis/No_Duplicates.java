//Link:-https://open.kattis.com/problems/nodup
import java.util.*;
public class No_Duplicates
{
    public static void main(String[] args)
    {
        String s;
        Scanner in = new Scanner(System.in);
        s = in.nextLine();
        for(int i=0; i<s.length(); i++)
        {
            int j = s.indexOf(' ');
            String a = s.substring(0,j);
            s = s.substring(j+1);
            for(int k=j; k<(s.length()-1); k++)
            {
                String c = s.substring(k,s.indexOf(' '));
                if(a.equals(c))
                {
                    System.out.println(false);
                    break;
                }
            }  
        }
        System.out.println(true);
    }
}