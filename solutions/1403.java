import java.util.*;

class Solution {
  public List<Integer> minSubsequence(int[] nums) {
    Arrays.sort(nums);
    List<Integer> ll = new ArrayList<>();
    int sum = 0;
    int ans = 0;
    for (int i : nums) {
      sum += i;
    }
    for (int i = nums.length - 1; i >= 0; i--) {
      ans += nums[i];
      sum -= nums[i];
      ll.add(nums[i]);
      if (sum < ans) {
        break;
      }
    }
    return ll;
  }
}
