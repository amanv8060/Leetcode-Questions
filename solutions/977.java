import java.util.*;

class Solution {
  public int[] sortedSquares(int[] nums) {
    int[] arr = new int[nums.length];
    int i = 0;
    int j = nums.length - 1;
    int b = nums.length - 1;
    while (i <= j) {
      if (i == j) {
        arr[b--] = nums[i] * nums[i];
        break;
      }
      if (Math.abs(nums[i]) > Math.abs(nums[j])) {
        arr[b--] = nums[i] * nums[i];
        i++;
      } else if (Math.abs(nums[i]) < Math.abs(nums[j])) {
        arr[b--] = nums[j] * nums[j];
        j--;
      } else if (Math.abs(nums[i]) == Math.abs(nums[j])) {
        arr[b--] = nums[i] * nums[i];
        arr[b--] = nums[i] * nums[i];
        i++;
        j--;
      }
    }
    return arr;
  }
}
