import java.util.*;
public class Job_Expenses {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N,sum=0;
        int size = sc.nextInt();
        for(int i=0;i<size;i++)
        {
            N = sc.nextInt();
            if(N<0)
                sum+=(-N);
        }
        System.out.println(sum);
    }
}
