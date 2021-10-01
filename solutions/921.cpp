#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int minAddToMakeValid(string s) {
    int open = 0;
    int close = 0;
    stack<char> sta;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        sta.push(s[i]);
        open++;
      }
      else if (sta.empty() == false and s[i] == ')' and sta.top() == '(') {
        open--;
        sta.pop();
      } else {
        sta.push(s[i]);
        close++;
      }
    }
    return close + open;
  }
};
