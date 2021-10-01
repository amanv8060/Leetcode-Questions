import java.util.*;

class Solution {
  public String defangIPaddr(String address) {
    int l = address.length();
    String s = "";
    char c;
    for (int i = 0; i < l; i++) {
      c = address.charAt(i);
      if (c == '.') {
        s = s + "[" + "." + "]";
      } else {
        s = s + c;
      }
    }
    return s;
  }
}
