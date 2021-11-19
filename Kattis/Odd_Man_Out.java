import java.util.*;
public class Odd_Man_Out {
    public static int solve(int arr[])
    {
       if(arr[0]!=arr[1])
           return arr[0];
       for(int i=1;i< arr.length-1;i++)
           if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1])
               return arr[i];
       return arr[arr.length-1];
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int j=1;j<=N;j++)
        {
            int G = sc.nextInt();
            int arr[] = new int[G];
            for(int i=0;i<G;i++)
                arr[i] = sc.nextInt();
            Arrays.sort(arr);
            System.out.println("Case #"+j+": "+solve(arr));
        }
    }
}
