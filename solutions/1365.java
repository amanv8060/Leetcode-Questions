import java.util.*;

class Solution {
  public int[] smallerNumbersThanCurrent(int[] nums) {
    int count = 0;
    int[] n_arr = new int[nums.length];
    for (int i = 0; i < nums.length; i++) {
      for (int j = 0; j < nums.length; j++) {
        if (nums[j] < nums[i]) {
          count++;
        }
      }
      n_arr[i] = count;
      count = 0;
    }
    return n_arr;
  }
}
