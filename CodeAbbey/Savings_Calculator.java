//Link:-https://www.codeabbey.com/index/task_view/savings-calculator
import java.util.Scanner;
import java.lang.Math;

class Savings_Calculator{
    public static void main(String[] args) {
        int n, r, p, years;
        double s;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            s  = sc.nextDouble();
            r = sc.nextInt(); 
            p = sc.nextInt();
            years = 0;
            while(s < r) {
                s = s + s * (p * 0.01);
                s = (double)Math.round(s*100) / 100;
                years++;
            }
            System.out.print(years + " ");
        }
    }
}