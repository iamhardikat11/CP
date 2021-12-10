import java.util.*;
import java.io.*;
import java.lang.*;

import static java.lang.Math.pow;

public class Building_Pyramids {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 1;
        while(n>=(4*pow(i,2)-4*i+1))
        {
           n-=(4*pow(i,2)-4*i+1);
           i++;
        }
        System.out.println(i-1);
    }
}