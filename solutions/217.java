class Solution {
  public boolean containsDuplicate(int[] nums) {
    HashMap<Integer, Integer> hm = new HashMap<>();
    boolean isDuplicated = false;
    for (int i = 0; i < nums.length; i++) {
      if (hm.containsKey(nums[i])) {
        isDuplicated = true;
        break;
      } else {
        hm.put(nums[i], 1);
      }
    }
    return isDuplicated;
  }
}
