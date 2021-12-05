import java.util.*;
import java.lang.*;
import java.io.*;
public class TSMIVIOLET 
{
  public static void main(String []args) throws IOException
  {
    try
    {
      Scanner sc = new Scanner(System.in);
      String day = sc.next();
      switch(day)
      {
        case "Saturday": System.out.println("Sandwich\n");
                         break;
        case "Sunday": System.out.println("Soup\n");
                         break;
        case "Monday": System.out.println("Macaroon\n");
                         break;
        case "Tuesday": System.out.println("Toffee\n");
                         break;
        case "Wednesday": System.out.println("Waffles\n");
                         break;
        case "Thursday": System.out.println("Taco\n");
                         break;
        case "Friday": System.out.println("French Fries\n");
                         break;
      }
    }
    catch(Exception e)
    {
      return;
    }
  }
}
