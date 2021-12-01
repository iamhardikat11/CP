import java.io.*;
import java.util.*;
import java.lang.*;
public class Simon_Says {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String s = sc.nextLine();
        while(t-->0)
        {
            s = sc.nextLine();
            if(s.contains("Simon says"))
            {
                System.out.println(s.substring(11));
            }
        }
    }
}
