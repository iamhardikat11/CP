import java.util.*;
import java.lang.*;
public class B_PIN_Codes
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int tc=1;tc<=t;tc++)
        {
            System.out.print("Case #"+tc+": ");
            int N = sc.nextInt();
            int array[] = new int[N];
            for(int i=0;i<N;i++) array[i] = sc.nextInt();
            int[] answer=new int[N];
            Map<Integer,Integer> map=new HashMap<>();
            TreeSet<Integer> set=new TreeSet<>();
            for(int i=0;i<N;i++){
                if(map.containsKey(array[i]))
                    map.put(array[i],map.get(array[i])+1);
                else
                    map.put(array[i],1);
                 set.add(array[i]);
            }
            int y;
            for(int i=0;i<N;i++){
                y=set.floor(array[i]*2)==null?-1:set.floor(array[i]*2);
                if(y==array[i] && map.get(array[i])==1)
                    y=set.floor(array[i]-1)==null?-1:set.floor(array[i]-1);
                answer[i] = y;
            }
            for(int i=0;i<N;i++)
                System.out.print(answer[i]+" ");
            System.out.println();
        }
    }
}
