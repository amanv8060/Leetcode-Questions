import java.util.*;

class Solution {
  public List<Integer> findDuplicates(int[] nums) {
    List<Integer> ll = new ArrayList<>();
    for (int i = 0; i < nums.length; i++) {
      int val = Math.abs(nums[i]);
      val--;
      if (nums[val] < 0) {
        ll.add(val + 1);
      } else {
        nums[val] = -nums[val];
      }
    }
    return ll;
  }
}
