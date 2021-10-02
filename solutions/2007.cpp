#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  vector<int> findOriginalArray(vector<int>& nums) {
    unordered_map<int, int> d2c;
    vector<int> ret;
    for (int i : nums) d2c[i]++;
    if (d2c.find(0) != d2c.end()) {
      if (d2c[0] % 2 != 0) return {};
      ret.insert(ret.end(), d2c[0] / 2, 0);
      d2c.erase(0);
    }

    for (int i : nums) {
      if (d2c.find(i) == d2c.end()) continue;
      int cur = i;
      while (cur % 2 == 0 && d2c.find(cur / 2) != d2c.end()) {
        cur = cur / 2;
      }
      // now cur is the smallest element in the chain
      int need_as_double = 0;
      for (; d2c.find(cur) != d2c.end(); cur *= 2) {
        d2c[cur] -= need_as_double;

        if (d2c[cur] < 0) return {};
        ret.insert(ret.end(), d2c[cur], cur);
        need_as_double = d2c[cur];
        d2c.erase(cur);
      }
      if (need_as_double != 0) return {};
    }
    return ret;
  }
};
