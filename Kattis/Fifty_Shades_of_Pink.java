import java.util.*;
import java.io.*;
import java.lang.*;
public class Fifty_Shades_of_Pink {
    public static void main(String[] args)
    {
     int count = 0;
     Scanner sc = new Scanner(System.in);
     int N = sc.nextInt();
     while(N-->0)
     {
         String s = sc.next();
         s = s.toLowerCase();
         if(s.contains("pink")||s.contains("rose"))
             count++;
     }
     if(count==0)
         System.out.println("I must watch Star Wars with my daughter");
     else
         System.out.println(count);
    }
}
