import java.util.*;
import java.lang.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(System.in);
            int tc = sc.nextInt();
            for (int t = 1; t <= tc; t++) {
                int r = sc.nextInt();
                int c = sc.nextInt();
                for (int i = 1; i <= r; i++) {
                    for (int j = 1; j <= c; j++) {
                        if (i % 2 == 0)
                            System.out.print(j % 2 == 0 ? "*" : ".");
                        else
                            System.out.print(j % 2 == 0 ? "." : "*");
                    }
                    System.out.println();
                }
            }
        }
        catch(Exception e)
        {
            return;
        }
    }
}
