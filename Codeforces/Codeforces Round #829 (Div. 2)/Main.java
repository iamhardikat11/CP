import java.util.*;
import java.lang.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n, x;
        n = sc.nextInt();
        x = sc.nextInt();
        int arr[] = new int[n];
        int cnts[] = new int[x+1];
        for (int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
            if (arr[i] < x)
                cnts[arr[i]]++;
        }
        for (int i = 0; i < x; i++)
        {
            if (cnts[i] % (i + 1) != 0)
            {
                System.out.println("No");
                return; 
            }
            else
                cnts[i + 1] = cnts[i+1] + cnts[i] / (i + 1);
        }
        System.out.println("Yes");
    }
}