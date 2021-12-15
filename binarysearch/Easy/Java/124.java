import java.util.*;

class Solution {
    public int[] solve(int n)
    {
        int[][] arr = new int[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            arr[i][0] = 1;
            arr[i][i] = 1;
            for(int j=1;j<=i-1;j++)
            {
                arr[i][j] = arr[i-1][j-1]+arr[i-1][j]; 
            }
        }
        return arr[n];
    }
}
