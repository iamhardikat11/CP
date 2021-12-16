import java.lang.*;
import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        ArrayList<Integer> v = new ArrayList<>();
        for(int i:arr)
        {
            i = sc.nextInt();
            v.add(i);
        }
        for(int i=1;i<=n;i++)
            System.out.print((v.indexOf(i)+1)+" ");
    }
}
