import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        System.out.println((a.charAt(0)>=65 && a.charAt(0)<=90)?a:(char)(a.charAt(0)-32)+a.substring(1));
    }
}
