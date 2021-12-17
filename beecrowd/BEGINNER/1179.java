import java.util.*;
import java.io.*;
import java.lang.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[15];
        for(int i=0;i<15;i++)
            arr[i] = sc.nextInt();
        ArrayList<Integer> par = new ArrayList<>();
        ArrayList<Integer> impar = new ArrayList<>();
        for(int i = 0;i<15;i++)
        {
            if(arr[i]%2==0)
                par.add(arr[i]);
            else
                impar.add(arr[i]);
            if(par.size()==5)
            {
                for(int j=0;j<5;j++)
                    System.out.println("par["+j+"] = "+par.get(j));
                par.clear();
            }
            if(impar.size()==5)
            {
                for(int j=0;j<5;j++)
                    System.out.println("impar["+j+"] = "+impar.get(j));
                impar.clear();
            }
        }
        if(impar.size()!=0)
        {
            for(int j=0;j<impar.size();j++)
                System.out.println("impar["+j+"] = "+impar.get(j));
            impar.clear();
        }
        if(par.size()!=0)
        {
            for(int j=0;j<par.size();j++)
                System.out.println("par["+j+"] = "+par.get(j));
            par.clear();
        }
    }
}
