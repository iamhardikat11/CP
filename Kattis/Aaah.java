import java.util.*;
public class Aaah {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s_1 = sc.next();
        String s_2 = sc.next();
        if(s_2.contains(s_1) && !s_2.equals(s_1))
            System.out.print("no");
        else
            System.out.print("go");
    }
}
