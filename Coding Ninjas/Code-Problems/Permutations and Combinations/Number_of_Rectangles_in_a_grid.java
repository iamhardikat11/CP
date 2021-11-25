public class Number_of_Rectangles_in_a_grid {
  
public static class Solution{
	public static long countRectangles(int m, int n){
		// Write your code here.
        long prod = 1;
        prod = ((long)m*(long)(m+1)*(long)(n)*(long)(n+1))/4;
        return prod;
  }
	}
}
