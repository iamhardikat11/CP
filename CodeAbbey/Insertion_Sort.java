import java.io.*;
import java.util.*;
import java.lang.*;
public class Insertion_Sort {
    static Scanner sc = new Scanner(System.in);
    public static void input(int []arr,int N)
    {
        for(int i=0;i<N;i++)
        {
           arr[i] = sc.nextInt();
        }
    }
    public static void main(String[] args) {

        int N = sc.nextInt();
        int []arr = new int[N];
        input(arr,N);
        for(int i=1;i<N;i++)
        {
            int count = 0;
            for(int j = 0;j<=i;j++)
            {
                if(arr[j]>arr[i]) {
                    int t = arr[j];
                    arr[j] = arr[i];
                    arr[i] = t;
                    count++;
                }
            }
            System.out.print(count+" ");
        }
    }
}