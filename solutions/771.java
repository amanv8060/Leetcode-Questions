import java.util.*;

class Solution {
  public int numJewelsInStones(String jewels, String stones) {
    int count = 0;
    char c = ' ';
    for (int i = 0; i < jewels.length(); i++) {
      c = jewels.charAt(i);
      for (int j = 0; j < stones.length(); j++) {
        if (c == stones.charAt(j)) {
          count++;
        }
      }
    }
    return count;
  }
}
