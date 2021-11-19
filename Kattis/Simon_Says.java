import java.util.*;
public class Simon_Says
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        String s = in.nextLine();
        for(int i = 0;i<N;i++)
        {
            s = in.nextLine();
            if(s.substring(0,10).equals("Simon says"))
                System.out.println(s.substring(10,s.indexOf('.')+1));
        }
    }
}