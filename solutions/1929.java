import java.util.*;

class Solution {
  public int[] getConcatenation(int[] nums) {
    int n = nums.length;
    int count = 0;
    int answer[] = new int[2 * n];
    for (int i = 0; i < nums.length; i++) {
      answer[i] = answer[i + nums.length] = nums[i];
    }

    return answer;
  }
}
