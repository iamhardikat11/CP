import java.util.*;
import java.io.*;
public class Main
{
  public static void main(String[] args)
  {
    BufferedReader in = new BudfferedReader(new InputStreamReader(System.in));
    String n = in.readLine();
    int x = Integer.parseInt(n.substring(n.indexOf(' ')));
    int y = Integer.parseInt(n.substring(n.indexOf(' ')+1,n.lastIndexOf(' ')));
    int b = Integer.parseInt(n.substring(n.lastIndexOf(' ')+1));
    if((b&1)==1)
      System.out.println(x);
    else
      System.out.println(y);
  }
}
