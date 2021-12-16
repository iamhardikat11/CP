import java.lang.*;
import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        if(a.equals(new StringBuilder(b).reverse().toString()))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
