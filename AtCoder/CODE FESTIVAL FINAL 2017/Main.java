/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
import java.lang.*;
public class Main
{
    public static int sumOfNonPrimeIndexValue(int input1[],int input2)
    {
        int n = input2;
        boolean prime[] = new boolean[n+1];
        for(int i=0;i<=n;i++)
            prime[i] = true;
        prime[0] = false;
        prime[1] = false;
        for(int p = 2; p*p <=n; p++)
        {
            if(prime[p] == true)
            {
                for(int i = p*p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        int sum=0;
        for(int i=0;i<input2;i++)
        {
            if(!prime[i])
            {
                    sum+=input1[i];
            }
        }
        return sum;
    }
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int input2 = sc.nextInt();
	    int input1[] = new int[input2];
		for(int i=0;i<input2;i++) input1[i] = sc.nextInt();
		System.out.println(sumOfNonPrimeIndexValue(input1,input2));
	}
}
