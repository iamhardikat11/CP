import java.util.*;
import java.lang.*;
public class Bulls_and_Cows {
    public static int compare(String s1, String s2)
    {
        int count=0;
        for(int i=0;i<4;i++)
        {
            if(s1.charAt(i)==s2.charAt(i))
                count++;
        }
        return count;
    }
    public static int compare_(char []arr, char[]arr_)
    {
        int count=0;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            if(arr[i]==arr_[j])
                count++;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String original = sc.next();
        int total = sc.nextInt();
        for(int i=1;i<=total;i++)
        {
          String s = sc.next();
          char arr[] = original.toCharArray();
          Arrays.sort(arr);
          char arr_[] = s.toCharArray();
          Arrays.sort(arr_);
          int one = compare(original,s);
          int two = compare_(arr,arr_);
          System.out.print(one+"-"+(two-one)+" ");
        }
    }
}
