import java.util.*;
public class Datum {
    public static int solve(int D, int M)
    {
      switch (M)
      {
          case 1: M = 1;
              break;
          case 2: M = 4;
              break;
          case 3: M = 4;
              break;
          case 4: M = 0;
              break;
          case 5: M = 2;
              break;
          case 6: M = 5;
              break;
          case 7: M = 0;
              break;
          case 8: M = 3;
              break;
          case 9: M = 6;
              break;
          case 10: M = 1;
              break;
          case 11: M = 4;
              break;
          case 12: M = 6;
              break;
      }
      return (3+D+M)%7;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int D = sc.nextInt();
        int M = sc.nextInt();
        switch(solve(D,M))
        {
            case 0: System.out.println("Saturday");
                    break;
            case 1: System.out.println("Sunday");
                    break;
            case 2: System.out.println("Monday");
                    break;
            case 3: System.out.println("Tuesday");
                    break;
            case 4: System.out.println("Wednesday");
                    break;
            case 5: System.out.println("Thursday");
                    break;
            case 6: System.out.println("Friday");
                    break;
        }
    }
}
