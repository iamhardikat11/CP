import java.util.*;
import java.lang.*;
import java.io.*;
public class LCH15JAB
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-->0)
        {
            String s = sc.next();
            if(s.length()%2!=0) 
             System.out.println("NO");
            else
            {
             int arr[] = new int[26];
             for(int i = 0; i<s.length();i++) 
              arr[s.charAt(i)-'a']++;
             boolean flag = false;
             for(int i=0;i<26;i++) 
             {
                if(arr[i]==s.length()/2)
                 flag = true;
             }
             if(flag)
              System.out.println("YES");
             else
              System.out.println("NO");
            }
        }
    }
}