import java.util.*;
import java.math.*;
public class Pizza_Crust {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        System.out.println(100.0*(Math.pow((R-C),2)/Math.pow(R,2)));
    }
}
