//Link:-https://open.kattis.com/problems/provincesandgold
import java.util.*;
public class Provinces_and_Gold
{
    public static void main(String[] args)
    {
        int G,S,C;
        Scanner in = new Scanner(System.in);
        G = in.nextInt();
        S = in.nextInt();
        C = in.nextInt();
        int buying_power = 3*G + 2*S + C;
        if(buying_power>=8)
         System.out.println("Province ");
        else if(buying_power>=5 && buying_power<8)
         System.out.println("Duchy ");
        else if(buying_power>=2 && buying_power<5)
         System.out.println("Estate ");
        System.out.println("or ");
        if(buying_power>=6)
         System.out.println("Gold");
        else if(buying_power>3 && buying_power<=6)
         System.out.println("Silver");
        else
         System.out.println("Copper");
    }
}