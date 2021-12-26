import java.io.*;
import java.util.*;

public class Main
{
	public static void main(String[] args) throws IOException
	{
		try{
			//Your Solve
			Scanner sc = new Scanner(System.in);
			int tc = sc.nextInt();
			while(tc-->0)
			{
			     int x = sc.nextInt();
			     int y = sc.nextInt();
			     int xr = sc.nextInt();
			     int yr = sc.nextInt();
			     int D = sc.nextInt();
			     if(x>=xr*D && y>=yr*D)
			      System.out.println("YES");
			     else 
			      System.out.println("NO");
			}
			}catch(Exception e){
			return;
		}
	}
}
