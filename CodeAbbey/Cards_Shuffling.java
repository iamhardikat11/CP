import java.util.*;
public class Cards_Shuffling {
    public static String solve(int i) {
        i = i % 13;
        return switch (i) {
            case 0 -> "A";
            case 9 -> "T";
            case 10 -> "J";
            case 11 -> "Q";
            case 12 -> "K";
            default -> Integer.toString(i + 1);
        };
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[52];
        for(int i=0;i<52;i++)
           arr[i] = sc.nextInt();
        ArrayList<String> v = new ArrayList<>();
        String card="";
        for(int i=0;i<52;i++)
        {
            switch (i/13)
            {
                case 0-> v.add("C"+solve(i));
                case 1-> v.add("D"+solve(i));
                case 2-> v.add("H"+solve(i));
                case 3-> v.add("S"+solve(i));
            }
        }
        for (int i=0;i<52;i++)
        {
            int j = arr[i]%52;
            String s = v.get(i);
            String s_ = v.get(j);
            v.set(j,s);
            v.set(i,s_);
        }
        for(int i=0;i<52;i++)
            System.out.print(v.get(i)+" ");
    }
}
