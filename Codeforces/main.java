import java.util.*;
import java.lang.*;

class Point{
    int x,y;
}
public class main{
    
public static Point findMin(Point[] p) {

        HashMap<Point, Integer> map = new HashMap<Point, Integer>();

        for (int i = 0; i < p.length; i++) {

            map.add(p[i], 0);

        }

        Arrays.sort(p, new Comparator<Point>() {

            @Override

            public int compare(Point p1, Point p2) {

                if (p1.x > p2.x)

                    return 1;

                if (p1.x < p2.x)

                    return -1;

                return 0;

            }

        });

        int [] disX = new int [p.length];

        //find distance from the left

        disX[0] = 0;

        for (int i = 1; i < disX.length; i++) {

            disX[i] = i*(p[i] - p[i-1]) + disX[i-1];

        }

        //find distance from the right

        int [] tmpX = new int [p.length];

        tmpX[p.length - 1] = 0;

        for (int i = tmpX.length - 2; i >= 0; i--) {

            tmpX[i] = (p.length - i)*(p[i]-p[i+1]) + tmpX[i+1];

            disX[i] += tmpX[i];

            map.put(p[i], disX[i]);

        }

         

        //do the same for y

        Arrays.sort(p, new Comparator<Point>() {

            @Override

            public int compare(Point p1, Point p2) {

                if (p1.y > p2.y)

                    return 1;

                if (p1.y < p2.y)

                    return -1;

                return 0;

            }

        });

        int [] disY = new int [p.length];

        //find distance from the left

        disY[0] = 0;

        for (int i = 1; i < disY.length; i++) {

            disY[i] = i*(p[i] - p[i-1]) + disY[i-1];

        }

        //find distance from the right

        int [] tmpY = new int [p.length];

        tmpY[p.length - 1] = 0;

        for (int i = tmpY.length - 2; i >= 0; i--) {

            tmpY[i] = (p.length - i)*(p[i]-p[i+1]) + tmpY[i+1];

            disY[i] += tmpY[i];

            map.put(p[i], map.get(p[i]) + disY[i]);

        }

        //calculate the 2d distance by adding x and y

        Point min = p[0];

        int minDis = map.get(p[0]);

        for (int i = 1; i < p.length; i++) {

            if (map.get(p[i]) < minDis) {

                minDis = map.get(p[i]);

                min = p[i];

            }

        }

        return min;

    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            Point[] p = new Point[n];
            for(int i=0;i<n;i++)
             {
                p[i].x = sc.nextInt();
                p[i].y = sc.nextInt();
             }
             System.out.println(findMin(p));
        }
    }
}