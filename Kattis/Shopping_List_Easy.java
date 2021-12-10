import java.util.*;
public class Shopping_List_Easy
{
    public static boolean allContain(String[][] v,int N,int M,int j)
    {
        String a = v[0][j];
        for(int k=0;k<N;k++)
        {
            boolean flag = false;
            for(int i=0;i<M;i++)
            {
                if (v[k][i].equals(a)) {
                    flag = true;
                    break;
                }
            }
            if(!flag)
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        String[][] v = new String[N][M];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++)
                v[i][j] = sc.next();
        }
        int count = 0;
        ArrayList<String> a = new ArrayList<>();
        for (int j = 0; j < M; j++)
        {
            if(allContain(v,N,M,j))
            {
               count++;
               a.add(v[0][j]);
            }
        }
        System.out.println(count);
        Collections.sort(a.subList(1, a.size()));
        for (String s : a) System.out.println(s);
    }
}