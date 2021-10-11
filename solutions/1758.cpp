#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int minOperations(string s) {
    int count = 0;
    int n = s.length();
    if (s[0] == '0') {
      for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 && s[i - 1] == '1') {
          count++;
        } else if (i % 2 == 1 && s[i - 1] == '0') {
          count++;
        }
      }
    } else {
      for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 && s[i - 1] == '0') {
          count++;
        }
        if (i % 2 == 1 && s[i - 1] == '1') {
          count++;
        }
      }
    }

    return min(count, n - count);
  }
};
