import java.lang.*;
import java.io.*;
import java.util.*;
public class Help_a_PhD_candidate_out {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        while(N-->0)
        {
            String s = sc.next();
            if(!s.contains("+"))
                System.out.println("skipped");
            else
                System.out.println(Integer.parseInt(s.substring(0,s.indexOf('+')))+Integer.parseInt(s.substring(s.indexOf('+')+1)));
        }
    }
}
