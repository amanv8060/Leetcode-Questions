#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int countGoodSubstrings(string s) {
    int count = 0;
    vector<char> v;

    if (s.length() < 3) {
      return 0;
    } else {
      for (int i = 0; i < s.length() - 2; i++) {
        for (int j = i; j < i + 3; j++) {
          v.push_back(s[j]);
        }

        sort(v.begin(), v.end());

        auto ip = unique(v.begin(), v.begin() + v.size());

        v.resize(distance(v.begin(), ip));

        if (v.size() == 3) {
          count++;
        }
        v.clear();
      }
      return count;
    }
  }
};
