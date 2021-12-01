import java.util.*;
import java.io.*;
import java.lang.*;
public class Avion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean flag = false;
        for(int i=0;i<5;i++)
        {
            String s = sc.nextLine();
            if(s.contains("FBI"))
            {
                flag = true;
               System.out.print(i+1+" ");
            }
        }
        if(!flag)
            System.out.println("HE GOT AWAY!");
    }
}
