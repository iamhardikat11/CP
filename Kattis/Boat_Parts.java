import java.lang.*;
import java.util.*;
import java.io.*;
public class Boat_Parts
{
    public static int solve(ArrayList<String> v,int N,int j)
    {
        List<String> a = v.subList(0,j+1);
        if(a.indexOf(v.get(j))!=j)
         return 0;
        else
            return 1;

    }
    public static void main(String[] args)
    {
      Scanner sc = new Scanner(System.in);
      int P = sc.nextInt();
      int N = sc.nextInt();
      ArrayList<String> v = new ArrayList<>(N);
      for(int i=0;i<N;i++)
          v.add(sc.next());
      int count = 0;
      int i;
      for(i=0;i<N;i++)
      {
          count += solve(v,N,i);
          if(count==P)
              break;
      }
      if(count<P)
          System.out.println("paradox avoided\n");
      else
          System.out.println(i+1);

    }
}
