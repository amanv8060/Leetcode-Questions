#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int romanToInt(string s) {
    int sum = 0;
    if (s.length() == 0) {
      return -1;
    } else {
      map<char, int> temp;
      temp.insert({'I', 1});
      temp.insert({'V', 5});
      temp.insert({'X', 10});
      temp.insert({'L', 50});
      temp.insert({'C', 100});
      temp.insert({'D', 500});
      temp.insert({'M', 1000});

      for (int i = 0; i < s.length(); i++) {
        if (temp[s[i]] < temp[s[i + 1]]) {
          sum += temp[s[i + 1]] - temp[s[i]];
          i++;
          continue;
        }
        sum += temp[s[i]];
      }
    }
    return sum;
  }
};
