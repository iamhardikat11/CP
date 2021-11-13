import java.util.*;
public class Caesar_Shift_Cipher {
    public static String manipulation(String s, int K)
    {
        StringBuilder n = new StringBuilder();
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)==' ' || s.charAt(i)=='.')
                n.append(s.charAt(i));
            else if((s.charAt(i)-K)>=65)
                n.append((char)(s.charAt(i)-K));
            else
                n.append((char)(s.charAt(i)+26-K));
        }
        return n.toString();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        String s = "";
        s = sc.nextLine();
        for(int i=1 ; i<=N;i++)
        {
            s = sc.nextLine();
            System.out.print(manipulation(s,K)+" ");
        }

    }
}
