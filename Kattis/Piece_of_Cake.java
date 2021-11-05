import java.util.*;
public class Piece_of_Cake
{
    public static void main(String[] args)
    {
          int n,v,h;
          Scanner in = new Scanner(System.in);
          n = in.nextInt();
          h = in.nextInt();
          v = in.nextInt();
          System.out.println(4*(((n-h)>h)?n-h:h)*(((n-v)>v)?n-v:v));
          in.close();
    }
}