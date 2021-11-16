import java.util.*;
public class Above_Average {
    public static int sum(int arr[])
    {
        int s = 0;
        for(int i=0;i< arr.length;i++)
            s+=arr[i];
        return s;
    }
    public static double solve(int arr[])
    {
            double average = (double)sum(arr)/ arr.length;
            int count=0;
            for(int i=0;i<arr.length;i++)
            {
                if(arr[i]>average)
                    count++;
            }
            return Math.round((((count)*100.0)/ arr.length)*1000.0)/1000.0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=1;i<=N;i++)
        {
            int l = sc.nextInt();
            int arr[] = new int[l];
            for(int j=0;j<l;j++)
                arr[j] = sc.nextInt();
             System.out.printf("%.3f",solve(arr));
             System.out.println("%");

        }
    }
}
