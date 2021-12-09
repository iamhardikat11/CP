import java.util.*;
import java.io.*;
import java.lang.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = "";
        int x = 0,y = 0,aim=0;
        while(true)
        {
            a = sc.nextLine();
            if(a.equals("0"))
                 break;
            switch (a.substring(0, a.indexOf(' '))) {
                case "forward" -> {
                    x += Integer.parseInt(a.substring(a.indexOf(' ') + 1));
                    y += aim * Integer.parseInt(a.substring(a.indexOf(' ') + 1));
                }
                case "down" -> {
                    aim += Integer.parseInt(a.substring(a.indexOf(' ') + 1));
                }
                case "up" -> {
                    aim -= Integer.parseInt(a.substring(a.indexOf(' ') + 1));
                }
            }
        }
        System.out.println(x*y);
    }
}
