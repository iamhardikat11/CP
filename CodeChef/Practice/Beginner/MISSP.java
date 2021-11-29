import java.util.*;
public class Codechef {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int N = sc.nextInt();
            StringBuilder s = new StringBuilder("0".repeat((N-1)/2+1));
            for(int i = 1;i<=N;i++)
            {
                int a = sc.nextInt();
                s.setCharAt(a-1, ((char)(Integer.parseInt(s.toString().substring(a-1,a))+49)));
            }
           System.out.println(s.toString().indexOf("1")+1);
        }
    }
}
