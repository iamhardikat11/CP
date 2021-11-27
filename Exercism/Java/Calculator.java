public class SalaryCalculator {
    public double multiplierPerDaysSkipped(int daysSkipped) {
        // throw new UnsupportedOperationException("Please implement the SalaryCalculator.multiplierPerDaysSkipped() method");
        return daysSkipped>5 ?0.85:1.0;
    }

    public int multiplierPerProductsSold(int productsSold) {
        // throw new UnsupportedOperationException("Please implement the SalaryCalculator.multiplierPerProductsSold() method");
        return productsSold>20?13:10;
    }

    public double bonusForProductSold(int productsSold) {
        // throw new UnsupportedOperationException("Please implement the SalaryCalculator.bonusForProductSold() method");
        return multiplierPerProductsSold(productsSold)*productsSold;
        
    }

    public double finalSalary(int daysSkipped, int productsSold) {
        // throw new UnsupportedOperationException("Please implement the SalaryCalculator.finalSalary() method");
        double a = 1000.0*multiplierPerDaysSkipped(daysSkipped)+bonusForProductSold(productsSold);
        return (a>2000.0)?2000.0:(a);
    } 
}
