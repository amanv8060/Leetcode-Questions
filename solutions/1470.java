import java.util.*;

class Solution {
  public int[] shuffle(int[] nums, int n) {
    int mid = nums.length / 2;
    int i = 0, j = 0, k = 0;
    int[] n_arr = new int[nums.length];
    for (i = 0, j = mid; i < mid && j < nums.length; i++, j++) {
      n_arr[k] = nums[i];
      k++;
      n_arr[k] = nums[j];
      k++;
    }
    return n_arr;
  }
}
