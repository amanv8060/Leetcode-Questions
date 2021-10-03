class Solution {
  public int minPairSum(int[] nums) {
    Arrays.sort(nums);
    int l = 0, r = nums.length - 1, max = 0;
    while (l < r) max = Math.max(max, nums[r--] + nums[l++]);
    return max;
  }
}
