import java.util.*;

class Solution {
  public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
    List<Boolean> result = new ArrayList<>();
    int i = 0;
    for (i = 0; i < candies.length; i++) {
      result.add(true);
    }
    for (i = 0; i < candies.length; i++) {
      int s = candies[i] + extraCandies;
      for (int j = 0; j < candies.length; j++) {
        if (s < candies[j]) {
          result.set(i, false);
          break;
        }
      }
      s = 0;
    }
    return result;
  }
}
