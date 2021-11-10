//Link:-https://open.kattis.com/problems/apaxiaaans
import java.util.*;
public class Apaxiaaaaaaaaaaaans
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        String output = "";
        for (int i = 0; i < (input.length()); i++)
        {
           output += input.substring(i,i+1);
           int j;
           for(j =i+1;j<input.length();j++)
           {
               if(input.charAt(i)!=input.charAt(j))
                  break;
           }
           i=(j-1);
        }
        System.out.println(output);
    }
}
