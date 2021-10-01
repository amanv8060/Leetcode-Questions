class Solution {
  public String longestCommonPrefix(String[] strs) {
    int flag = 0, k = 0;
    String ans = "";
    while (k < strs[0].length()) {
      char ch = strs[0].charAt(k);
      for (int i = 0; i < strs.length; i++) {
        if (k == strs[i].length() || ch != strs[i].charAt(k)) {
          flag = 1;
          break;
        }
      }
      if (flag == 1) break;
      ans += ch;
      k++;
    }
    return ans;
  }
}
