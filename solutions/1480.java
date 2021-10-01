import java.util.*;

class Solution {
  public int[] runningSum(int[] nums) {
    int s = 0;
    for (int i = 0; i < nums.length; i++) {
      s = s + nums[i];
      nums[i] = s;
    }
    return nums;
  }
}
