#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int numberOfWeakCharacters(vector<vector<int>>& p) {
    sort(p.begin(), p.end(), [](auto&& a, auto&& b) { return a[0] > b[0]; });

    int mxD = p[0][1];
    int mxD2 = -1;
    int ans = 0;
    for (int i = 1; i < p.size(); i++) {
      if (p[i][0] < p[i - 1][0]) {
        mxD2 = mxD;

        if (p[i][1] < mxD)
          ans++;
        else
          mxD = p[i][1];
        continue;
      }

      if (p[i][0] == p[i - 1][0]) {
        if (p[i][1] < mxD2)
          ans++;

        else
          mxD = max(mxD, p[i][1]);
      }
    }
    return ans;
  }
};
