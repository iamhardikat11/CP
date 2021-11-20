import java.util.*;
public class Share_Price_Volatility {
    public static boolean isVolatile(int[] arr)
    {
        int value = 0;
        for (int j : arr) value += j;
        double mean = (double)value/arr.length;
        double val = 0.04*mean;
        double sd = 0;
        for (int j : arr) {
            sd += Math.pow((double) j - mean, 2);
        }
        sd = Math.sqrt(sd/(arr.length-1));
        return sd >= val;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=1;i<=t;i++)
        {
         String s = sc.next();
         int []arr = new int[14];
         for(int j=0;j<14;j++)
             arr[j] = sc.nextInt();
         if(isVolatile(arr))
         System.out.print(s+" ");
        }
        sc.close();
    }
}
