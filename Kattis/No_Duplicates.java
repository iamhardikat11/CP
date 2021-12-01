import java.util.*;
import java.lang.*;
import java.io.*;
public class No_Duplicates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "";
        ArrayList<String> v = new ArrayList<>();
        while(sc.hasNext())
        {
            s = sc.next();
            if(v.contains(s))
            {
                System.out.println("no");
                return;
            }
            else
                v.add(s);
        }
        System.out.println("yes");
    }
}
