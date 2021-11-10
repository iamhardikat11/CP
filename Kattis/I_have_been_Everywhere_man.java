import java.util.*;
public class I_have_been_Everywhere_man
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for (int i = 0; i < T; i++)
        {
            int N = in.nextInt();
            String S[] = new String[N];
            String s = in.nextLine();
            for (int j =0; j < N; j++) 
                S[j] = in.nextLine();
            boolean visited[] = new boolean[N];
            int count = 0;
            for (int j = 0; j< N; j++)
            {
                if(visited[j] == false)
                {
                 count++;
                 visited[j] = true;
                 for(int k = j+1 ; k < N; k++)
                {
                    if(S[j].equals(S[k]))
                     visited[k] = true;
                }
                } 
            }
            System.out.println(count);
        }
    }
}