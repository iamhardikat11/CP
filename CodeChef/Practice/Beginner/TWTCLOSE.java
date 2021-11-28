import java.io.*;
import java.util.*;
import java.lang.*;
public class Main
{
    public static void main (String[] args) {
    /* code */
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int K = sc.nextInt();
    ArrayList<Integer> v = new ArrayList<Integer>();
    String s = sc.nextLine();
    for(int i=0;i<K;i++)
    {
        s = sc.nextLine();
        if(s.equals("CLOSEALL"))
            v.clear();
        else
        {
            int n = Integer.parseInt(s.substring(s.indexOf(" ")+1));
            if(v.contains(n))
                v.remove((Integer) n);
            else
                v.add(n);

        }
        System.out.println(v.size());
    }

}
}
