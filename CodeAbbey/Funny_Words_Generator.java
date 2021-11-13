import java.util.*;
public class Funny_Word_Generator {
    public static int randomValue(int x0)
    {
         return (445*x0+700001)%2097152;
    }
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
        String consonant = "bcdfghjklmnprstvwxz";
        String vowel = "aeiou";
        int N = sc.nextInt();
         int X_0 = sc.nextInt();
         for(int i=0;i<N;i++)
         {
             int l = sc.nextInt();
             StringBuffer s = new StringBuffer();

             for(int j=0;j<l;j++)
             {
                 X_0 = randomValue(X_0);
                 if(j%2==0)
                     s.append(consonant.charAt(X_0%19));
                 else
                     s.append(vowel.charAt(X_0%5));
             }
             System.out.print(s+" ");

         }

    }
}
