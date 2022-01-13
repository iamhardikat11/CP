import java.util.*;
import java.lang.*;
import java.io.*;
public class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    int[] arr = new int[n];
    for(int i=0;i<n;i++)
      arr[i] = sc.nextInt();
    Arrays.sort(arr);
    int lt = 0;
    int rt = arr.length-1;
    while(lt<rt)
    {
      if(arr[lt]+arr[rt]==k)
      {
        System.out.println("YES");
        break;
      }
      else if(arr[lt]+arr[rt]>k)
      {
        rt--;
      }
      else
      {
        lt++;
      }
    }
    System.out.println("NO");
    return 0;
  }
 }
