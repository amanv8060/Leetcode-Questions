class Solution {
  public int strStr(String haystack, String needle) {
    if (needle.length() == 0) {
      return 0;
    }

    char end = needle.charAt(needle.length() - 1);

    int i = 0;
    for (int j = needle.length() - 1; j < haystack.length(); j++) {
      if (haystack.charAt(j) == end) {
        i = j - (needle.length() - 1);
        if (haystack.substring(i, j + 1).equals(needle)) {
          return i;
        }
      }
    }

    return -1;
  }
}
