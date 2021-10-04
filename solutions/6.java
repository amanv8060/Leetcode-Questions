class Solution {
  public String convert(String s, int numRows) {
    String[] helper = new String[numRows];
    for (int i = 0; i < numRows; i++) {
      helper[i] = "";
    }
    int row = 0;
    int delta = 1;
    for (int i = 0; i < s.length(); i++) {
      char c = s.charAt(i);
      helper[row] += c;
      if (row == numRows - 1) {
        delta = -1;
      } else if (row == 0) {
        delta = 1;
      }
      row = row + delta;
      row = Math.max(0, row);
    } // for
    String result = "";
    for (int i = 0; i < numRows && s.length() > 0; i++) {
      result += helper[i];
    }
    return result;
  }
}
