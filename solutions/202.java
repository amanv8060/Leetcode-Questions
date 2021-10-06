class Solution {
  private int sumOfSquare = 0;

  public boolean isHappy(int n) {
    if (n == 1) {
      return true;
    } else if (n == 4) {
      return false;
    }

    sumOfSquare = 0;
    while (n != 0) {
      int decimal = n % 10;
      n /= 10;
      sumOfSquare += decimal * decimal;
    }

    return isHappy(sumOfSquare);
  }
}
