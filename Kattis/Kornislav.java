import java.lang.*;
import java.util.*;
public class Kornislav {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        ArrayList<Integer> v = new ArrayList<>();
        for(int i=1;i<=4;i++)
         v.add(sc.nextInt());
        Collections.sort(v);
        System.out.println(Math.min(v.get(0),v.get(1))*Math.min(v.get(2),v.get(3)));
    }
}
