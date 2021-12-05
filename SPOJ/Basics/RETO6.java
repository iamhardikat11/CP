import java.util.*;
import java.lang.*;
import java.io.*;
public class RETO6
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String a = "I hate it";
        String b = "I love it";
        StringBuilder s = new StringBuilder();
        for(int i=1;i<=N;i++)
        {
            if(i%2==0)
                s.append(b).append(" ");
            else
                s.append(a).append(" ");
        }
        System.out.println(s.substring(0,s.length()-1));
    }
}
