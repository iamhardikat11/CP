import java.util.Scanner;
public class Java_Stdin_and_Stdout_2
{
public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        double d = scan.nextDouble();
        String s = scan.nextLine(); 
        s = scan.nextLine();
        // Write your code here.

        System.out.println("String: " +s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}
}
