import java.util.*;
public class Vowel_Count {
    public static int solve(String s)
    {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='a' || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o' || s.charAt(i)=='u' || s.charAt(i)=='y')
                count++;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String s = sc.nextLine();
        for(int i=0;i<t;i++)
        {
            s = sc.nextLine();
            if(s.equals("\r") || s.equals("\n"))
            {
                i--;
                continue;
            }
            System.out.print(solve(s)+" ");
        }
    }
}
