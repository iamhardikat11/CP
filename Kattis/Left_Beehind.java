import java.lang.*;
import java.io.*;
import java.util.*;
public class Left_Beehind {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        while(true)
        {
            if(x+y==13)
                System.out.println("Never speak again.");
            else if(x>y)
                System.out.println("To the convention.");
            else if(x<y)
                System.out.println("Left beehind.");
            else
                System.out.println("Undecided.");
            x = sc.nextInt();
            y = sc.nextInt();
            if(x==0 && y==0)
                break;
        }
    }
}
