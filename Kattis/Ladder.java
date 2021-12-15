import java.lang.*;
import java.io.*;
import java.util.*;
public class Ladder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int v = sc.nextInt();
        System.out.println((int)Math.ceil((double)h/Math.sin(Math.toRadians(v))));
    }
}
