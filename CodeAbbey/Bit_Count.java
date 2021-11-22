import java.util.*;
public class Bit_Count {
    public static int count_(int n)
    {
        int count=0;
        while(n!=0)
        {
            if((n%2)==1)
                count++;
            n=n/2;
        }
        return count;
    }
    static String addBinary(String a, String b)
    {

        // Initialize result
        String result = "";

        // Initialize digit sum
        int s = 0;

        // Traverse both strings starting
        // from last characters
        int i = a.length() - 1, j = b.length() - 1;
        while (i >= 0 || j >= 0 || s == 1)
        {

            // Comput sum of last
            // digits and carry
            s += ((i >= 0)? a.charAt(i) - '0': 0);
            s += ((j >= 0)? b.charAt(j) - '0': 0);

            // If current digit sum is
            // 1 or 3, add 1 to result
            result = (char)(s % 2 + '0') + result;

            // Compute carry
            s /= 2;

            // Move to next digits
            i--; j--;
        }

        return result;
    }
    public static int solve(int n)
    {
        StringBuilder num = new StringBuilder();
        while(n!=0)
        {
            num.append(n%2);
            n = n/2;
        }
        StringBuilder n_ = new StringBuilder(num);
        num = new StringBuilder(n_.reverse().toString());
        String c = "0".repeat(32 - num.toString().length()) + num;
        StringBuilder s = new StringBuilder();
        for(int i=0;i<32;i++) {
            if (c.charAt(i) == '1')
                s.append(0);
            else
                s.append(1);
        }
        s = new StringBuilder(addBinary(s.toString(),"1"));
        int count=0;
        for(int i=0;i<s.length();i++)
            if(s.charAt(i)=='1')
                count++;
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=1;i<=t;i++)
        {
            int N = sc.nextInt();
            if(N>=0)
                System.out.print(count_(N)+" ");
           else
            {
                System.out.print(solve(-N)+" ");
            }
        }
    }
}
