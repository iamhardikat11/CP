import java.lang.*;
import java.util.*;
import java.io.*;
public class Cudoviste {
    public static int count(char a,char b,char c,char d)
    {
        if(a!='#' && b!='#' && c!='#' && d!='#')
         return ((a=='X')?1:0) + ((b=='X')?1:0) + ((c=='X')?1:0) + ((d=='X')?1:0);
        return -1;
    }
    public static int solve(char[][] ch,int R,int C,int n)
    {
       int c = 0;
       for(int i=0;i<R-1;i++)
       {
          for(int j=0;j<C-1;j++)
          {
              if(count(ch[i][j],ch[i][j+1],ch[i+1][j],ch[i+1][j+1])==n)
                  c++;
          }
       }
       return c;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        char[][] arr = new char[R][C];
        for(int i=0;i<R;i++)
        {
            String s = sc.next();
            for(int j=0;j<C;j++)
                arr[i][j] = s.charAt(j);
        }
        System.out.println(solve(arr,R,C,0)+"\n"+solve(arr,R,C,1)+"\n"+solve(arr,R,C,2)+"\n"+solve(arr,R,C,3)+"\n"+solve(arr,R,C,4));
    }
}
