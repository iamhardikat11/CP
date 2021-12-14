import java.util.*;
import java.lang.*;

public class Main
{
    public static int partition(int[] arr,int left,int right)
    {
        System.out.print(left+"-"+right+" ");
        int lt = left;
        int rt = right;
        String dir = "left";
        int pivot = arr[left];
        while(lt < rt)
        {
            if(dir.equals("left"))
            {
                if(arr[rt]>pivot)
                    rt--;
                else
                {
                    int t = arr[lt];
                    arr[lt] = arr[rt];
                    arr[rt] = arr[lt];
                    lt++;
                    dir = "rigth";
                }
            }
            else
            {
                if(arr[lt]<pivot)
                    lt++;
                else
                {
                    int t = arr[rt];
                    arr[rt] = arr[lt];
                    arr[lt] = t;
                    rt--;
                    dir = "left";
                }
            }
        }
        arr[lt] = pivot;
        return lt;
    }
    public static void quicksort(int[] arr,int left, int right)
    {
        int pivot_pos = partition(arr,left,right);
        if(pivot_pos-left>1)
            quicksort(arr,left,pivot_pos-1);
        if(right-pivot_pos>1)
            quicksort(arr,pivot_pos+1,right);
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0;i<n;i++)
            arr[i] = sc.nextInt();
        quicksort(arr,0,n-1);
    }
}
