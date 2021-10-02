#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  string maxValue(string n, int x) {
    if (n[0] == '-') {
      bool gg = false;
      for (int i = 1; i < n.size(); i++) {
        if (n[i] > x + '0') {
          n.insert(n.begin() + i, x + '0');
          gg = true;
          break;
        }
      }
      if (gg == false) {
        n.push_back(x + '0');
      }
    } else {
      bool gg = false;
      for (int i = 0; i < n.size(); i++) {
        if (n[i] < x + '0') {
          n.insert(n.begin() + i, x + '0');
          gg = true;
          break;
        }
      }
      if (gg == false) {
        n.push_back(x + '0');
      }
    }
    return n;
  }
};
