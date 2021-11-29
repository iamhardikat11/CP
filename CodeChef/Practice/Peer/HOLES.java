import java.util.*;
import java.lang.*;
public class Main {
    public static int solve(String s)
    {
        int[] freq ={1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0};
        int s_ = 0;
        for(int i=0;i<s.length();i++)
            s_+=freq[s.charAt(i)-'A'];
     //    System.out.println(freq.length);
        return s_;
    }
    public static void main(String[] args)
    {
        try{
             Scanner sc = new Scanner(System.in);
             int tc = sc.nextInt();
             String s;
             for(int i=1;i<=tc;i++)
             {
                 s = sc.next();
                 System.out.println(solve(s));
                
             }
			
		}catch(Exception e){
			return;
		}
        
    }
}
