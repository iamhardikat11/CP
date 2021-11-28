import java.util.*;
import java.lang.*;
import java.io.*;
public class Tic_Tac_Toe {
    static Scanner sc = new Scanner(System.in);
    public static void input(int[] arr)
    {
        for(int i=0;i<9;i++)
            arr[i] = sc.nextInt();
    }
    public static void initialize(char [][]matrix)
    {
        for (int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                matrix[i][j] = '*';
        }
    }
    public static void manipmatrix(char [][]matrix,int row,int column,char ch)
    {
        matrix[row][column] = ch;
    }
    public static boolean rowEqual(char [][]matrix,int row)
    {
        return matrix[row-1][0] == matrix[row-1][1] && matrix[row-1][1] == matrix[row-1][2] && matrix[row-1][0] != '*' && matrix[row-1][1]!='*' && matrix[row-1][2] != '*';
    }
    public static boolean columnEqual(char [][]matrix,int column)
    {
        return matrix[0][column-1] == matrix[1][column-1] && matrix[1][column-1] == matrix[2][column-1]  && matrix[0][column-1] != '*' && matrix[1][column-1]!='*' && matrix[2][column-1] != '*';
    }
    public static boolean diagonalEqual(char [][]matrix)
    {
        return matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2] && matrix[0][0] != '*' || matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0] && matrix[0][2]!='*';
    }
    public static boolean gameEnded(char [][]matrix)
    {
        return rowEqual(matrix, 1) || rowEqual(matrix, 2) || rowEqual(matrix, 3) || columnEqual(matrix, 1) || columnEqual(matrix, 2) || columnEqual(matrix, 3) || diagonalEqual(matrix);
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        while(t-->0)
        {
            int []arr = new int[9];
            input(arr);
            char [][]matrix = new char[3][3];
            initialize(matrix);
            int end = 0;
            for(int i=0;i<9;i++)
            {
                if(i%2==0)
                    manipmatrix(matrix,(arr[i]-1)/3,(arr[i]-1)%3,'O');
                else
                    manipmatrix(matrix,(arr[i]-1)/3,(arr[i]-1)%3,'X');
                if(i>=3 &&  gameEnded(matrix))
                {
                    end = i+1;
                    break;
                }
            }
            System.out.print(end+" ");
        }
    }
}
