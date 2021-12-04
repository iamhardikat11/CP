import java.io.*;
import java.util.*;

public class Main
{
	public static void main(String[] args) throws IOException
	{
		try{
			//Your Solve
			Scanner sc = new Scanner(System.in);
			String s = sc.next();
			if(s.substring(s.length()-2,s.length()).equals("AM"))
			{
			     if(Integer.parseInt(s.substring(0,2))==12)
			     {
			          System.out.print("00");
			          System.out.println(s.substring(2,s.length()-2));
			     }
			       
			     else
			      System.out.println(s.substring(0,s.length()-2));
			}
			else
			{
			 if(Integer.parseInt(s.substring(0,2))==12)
			  System.out.println(s.substring(0,s.length()-2));
			 else
			 {
			 System.out.print(Integer.toString(12+Integer.parseInt(s.substring(0,2))));
			 System.out.println(s.substring(2,s.length()-2));
			 }
			}
		}catch(Exception e){
			return;
		}
	}
}
