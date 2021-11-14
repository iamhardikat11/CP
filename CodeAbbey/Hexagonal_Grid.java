import java.util.*;
public class Hexagonal_Grid {
    double X,Y;
    public static Hexagonal_Grid calculate(char ch)
    {
        Hexagonal_Grid new_Posi = new Hexagonal_Grid();
        switch(ch)
        {
            case 'A': new_Posi.X = 1.0; new_Posi.Y = 0.0;
                      break;
            case 'B': new_Posi.X = 0.5; new_Posi.Y = Math.sqrt(3)/2.0;
                      break;
            case 'C': new_Posi.X = -0.5; new_Posi.Y = Math.sqrt(3)/2.0;
                      break;
            case 'D': new_Posi.X = -1.0; new_Posi.Y = 0.0;
                      break;
            case 'E': new_Posi.X = -0.5; new_Posi.Y = -Math.sqrt(3)/2.0;
                      break;
            case 'F': new_Posi.X = 0.5; new_Posi.Y = -Math.sqrt(3)/2.0;
                      break;
        }
        return new_Posi;
    }
    public static double solve(String s)
    {
        Hexagonal_Grid curr_Posi = new Hexagonal_Grid();
        curr_Posi.X = 0.0;
        curr_Posi.Y = 0.0;
        for(int i=0;i<s.length();i++)
        {
            curr_Posi.X += calculate(s.charAt(i)).X;
            curr_Posi.Y += calculate(s.charAt(i)).Y;
        }
        return Math.sqrt(Math.pow(curr_Posi.X,2)+Math.pow(curr_Posi.Y,2));
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            String s = sc.next();
            System.out.print(solve(s)+" ");
        }
    }
}
