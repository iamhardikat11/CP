import java.util.*;
public class Rock_Papers_Scissors {
    public static int solve(String s)
    {
        int diff=0;
        for(int i=0;i<s.length();i+=3)
        {
            if(s.charAt(i)==s.charAt(i+1))
                continue;
            else if(s.charAt(i)=='R' && s.charAt(i+1)=='S')
                diff++;
            else if(s.charAt(i)=='S' && s.charAt(i+1)=='R')
                diff--;
            else if(s.charAt(i)=='S' && s.charAt(i+1)=='P')
                diff++;
            else if(s.charAt(i)=='P' && s.charAt(i+1)=='S')
                diff--;
            else if(s.charAt(i)=='P' && s.charAt(i+1)=='R')
                diff++;
            else
                diff--;
        }
        return (diff>0)?1:2;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        String s = sc.nextLine();
        for(int i=0;i<T;i++)
        {
            s = sc.nextLine();
            System.out.print(solve(s)+" ");
        }
    }
}
