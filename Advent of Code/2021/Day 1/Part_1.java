import java.util.*;
import java.io.*;
import java.lang.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int count = 0;
        while(b!=0)
        {
            count+=(b>a?1:0);
            a = b;
            b = sc.nextInt();
        }
        System.out.println(count);
    }
}
