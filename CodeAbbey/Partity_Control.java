//Link:-https://www.codeabbey.com/index/task_view/parity-control
import java.util.*;
public class Parity_Control
{
    public static int countBits(int N)
    {
        int count=0;
        while(N!=0)
        {
            if(N%2==1)
                count++;
            N = N/2;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        while(N!=46)
        {
            if(countBits(N)%2==0)
            {
                if(N>=65 && N<=90 || N>=97 && N<=122 || N==32 || N>=48 && N<=57 )
                 System.out.print((char)N);
                else
                {
                   N = N-128;
                   System.out.print((char)N);
                }
            }
            N = sc.nextInt();
        }
        System.out.print(".");
    }
}
