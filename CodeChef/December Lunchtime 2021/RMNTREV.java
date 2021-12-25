import java.io.*;
import java.util.*;

public class Main
{
    public static void main(String[] args) throws IOException
    {
        try{
            //Your Solve
            Scanner sc = new Scanner(System.in);
            int tc = sc.nextInt();
            while(tc-->0)
            {
                int N = sc.nextInt();
                int K = sc.nextInt();
                String s = sc.next();
                String result = s.substring(K,N);
                StringBuffer a = new StringBuffer();
                if(K%2==0)
                {
                    for(int i=K/2-1;i>=0;i--)
                    {
                        a.append(s.charAt(K-i-1));
                        a.append(s.charAt(i));
                    }
                    result = a+result;
                }
                else
                {
                    a.append(s.charAt((K-1)/2));
                    for(int i=(K+1)/2;i<K;i++)
                    {
                        a.append(s.charAt(i));
                        a.append(s.charAt(K-1-i));
                    }
                    result = a+result;
                }
                System.out.println(result);
            }
        }catch(Exception e){
            return;
        }
    }
}
