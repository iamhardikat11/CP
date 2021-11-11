import java.util.*;
import java.math.*;
public class Solution {
    double x=0.0,y=0.0;
    String name;
    public static void manip(Solution ob[],double angle) {
        for (int i = 0; i < ob.length; i++) {
            ob[i].x = Math.sqrt(Math.pow(ob[i].x, 2) + Math.pow(ob[i].y, 2)) * (Math.cos(Math.atan(ob[i].y / ob[i].x) + angle));
            ob[i].x = Math.sqrt(Math.pow(ob[i].x, 2) + Math.pow(ob[i].y, 2)) * (Math.sin(Math.atan(ob[i].y / ob[i].x) + angle));
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        double angle= sc.nextDouble();
        Solution ob[] = new Solution[N];
        String s = sc.nextLine();
        for(int i=0;i<N;i++)
        {
            ob[i].name = sc.next();
            ob[i].x = sc.nextDouble();
            ob[i].y =sc.nextDouble();

        }
        manip(ob,Math.toRadians(angle));
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(ob[i].y>ob[j].y)
                {
                    replace(ob, i, j);
                }
                if(ob[i].y==ob[j].y)
                {
                    if(ob[i].x>ob[j].x)
                    {
                        replace(ob, i, j);
                    }
                }
            }
        }
        for(int i=0;i<N;i++)
            System.out.print(ob[i].name+" ");
    }

    public static void replace(Solution[] ob, int i, int j) {
        String temp = ob[i].name;
        ob[i].name = ob[j].name;
        ob[j].name = temp;
        double temp_1 = ob[i].x;
        ob[i].x = ob[j].x;
        ob[j].x = temp_1;
        double temp_2 = ob[i].y;
        ob[i].y = ob[j].y;
        ob[j].y = temp_2;
    }
}
