#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int distributeCandies(vector<int>& candyType) {
    int n = candyType.size();
    map<int, int> m;
    for (int i = 0; i < n; i++) {
      m.insert({candyType[i], 1});
    }
    int maplen = m.size();
    if (maplen >= n / 2)
      return n / 2;
    else
      return maplen;
  }
};
