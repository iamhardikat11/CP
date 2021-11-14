import java.util.*;
public class Blackjack_Counting {
    public static int solve(String s)
    {
        int count=0;
        for(int i=0;i<s.length();i+=2)
        {
            if(s.charAt(i)>='2' && s.charAt(i)<='9')
                count+=s.charAt(i)-48;
            else
            {
                if(s.charAt(i)=='A')
                    count+=1;
                else
                    count+=10;
            }
        }
        if(count<=11)
        {
            StringBuffer s_ = new StringBuffer(s);
            if(s.indexOf('A')!=-1)
                count+=10;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String s = sc.nextLine();
        for(int i=1;i<=t;i++)
        {
            s = sc.nextLine();
            if(solve(s)>21)
                System.out.print("Bust ");
            else
                System.out.print(solve(s)+" ");
        }
    }
}
