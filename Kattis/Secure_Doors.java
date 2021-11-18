import java.util.*;
import java.lang.*;
public class Secure_Doors {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        String s = in.nextLine();
        ArrayList<String> v = new ArrayList<>();
        for (int i = 1; i <= N; i++) {
            s = in.nextLine();
            if (s.startsWith("entry")) {
                if (v.contains(s.substring(5))) {
                    System.out.println(s.substring(5) + " entered (ANOMALY)");
                } else {
                    System.out.println(s.substring(5) + " entered");
                    v.add(s.substring(5));
                }
            } else {
                if (!v.contains(s.substring(4))) {
                    System.out.println(s.substring(4) + " exited (ANOMALY)");
                } else {
                    System.out.println(s.substring(4) + " exited");
                    v.remove(s.substring(4));
                }
            }
        }
    }
}
