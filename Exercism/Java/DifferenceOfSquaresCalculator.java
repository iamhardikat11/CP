class DifferenceOfSquaresCalculator {

    int computeSquareOfSumTo(int input) {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return (int)Math.pow((input*(input+1))/2,2);
    }

    int computeSumOfSquaresTo(int input) {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return (input*(input+1)*(2*input+1))/6;
    }

    int computeDifferenceOfSquares(int input) {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return computeSquareOfSumTo(input)-computeSumOfSquaresTo(input);
    }

}
