import java.util.*;
public class Triple_Texting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int N = s.length()/3;
        String a = s.substring(0,N);
        if(a.equals(s.substring(N,2*N)) || a.equals(s.substring(2*N,3*N)))
            System.out.print(a);
        else
        {
            a = s.substring(N,2*N);
            System.out.print(a);
        }

    }
}
