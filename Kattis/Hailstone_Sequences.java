import java.util.*;
public class Hailstone_Sequences {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long  N = sc.nextLong();
        ArrayList<Long> v = new ArrayList<>();
        if(N!=1)
        {
           v.add(N);
           while(true)
           {
              if(N%2==0)
              {
                  N = N/2;
                  v.add(N/2);
              }
              else
              {
                  N = 3*N+1;
                  v.add(N);
              }
              if(N==1)
                  break;
           }
           System.out.println(v.size());
        }
        else
            System.out.println("1\n");
    }
}
