import java.util.*;
import java.lang.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;
        String s = sc.next();
        int i = 0;
        for(i=0;i<n;i++)
        {
            while(i<(n-1) && s.charAt(i)==s.charAt(i+1))
            {
                count++;
                i++;
            }
        }
        System.out.println(count);
    }
}
