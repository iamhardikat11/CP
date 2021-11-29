import java.lang.*;
import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            for (int i = 0; i <= t; i++) {
                String s = sc.next();
                for (int j = 0; j < s.length() / 2; j += 2)
                    System.out.print(s.charAt(j));
                System.out.println();
            }
        }
        catch(Exception e)
            {
                return;
            }

        }
    }
