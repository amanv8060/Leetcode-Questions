import java.util.*;

class Solution {
  public String removeDuplicates(String S) {

    if (S.length() == 1) {
      return S;
    }
    Stack<Character> sc = new Stack<>();
    sc.push(S.charAt(0));
    for (int i = 1; i < S.length(); i++) {
      char c = S.charAt(i);
      if (!sc.isEmpty() && c == sc.peek()) {
        sc.pop();
      } else {
        sc.push(c);
      }
    }

    StringBuilder s = new StringBuilder();
    while (!sc.isEmpty()) {
      s.append(sc.pop());
    }
    return s.reverse().toString();
  }
}
