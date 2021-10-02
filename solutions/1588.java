import java.util.*;

class Solution {
  public int sumOddLengthSubarrays(int[] arr) {
    int sum = 0;
    int res = 0;
    for (int i = 0; i < arr.length; i++) {
      sum = 0;
      for (int j = i; j < arr.length; j++) {
        sum += arr[j];
        if ((j - i + 1) % 2 != 0) {
          res += sum;
        }
      }
    }

    return res;
  }
}
