import java.util.*;
public class Josephus_Problem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        ArrayList<Integer> v = new ArrayList<>();
        for(int i=0;i<N;i++)
            v.add(i+1);
        int i=0;
        while(v.size()!=1)
        {
          i+=(K-1);
          if(i>=v.size())
              i = i%v.size();
          v.remove(i);
        }
        System.out.println(v.get(0));


    }
}
