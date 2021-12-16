import java.lang.*;
import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int h = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();
        int c = n;
        Arrays.sort(arr);
        int i = 0;
        for(;i<n;i++)
            if(arr[i]>h)
                break;
        System.out.println(c+n-i);

    }
}
