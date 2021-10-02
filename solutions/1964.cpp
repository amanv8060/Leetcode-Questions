#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
    vector<int> dp(obstacles.size(), 1e9), ans;
    for (int obstacle : obstacles) {
      int idx = upper_bound(dp.begin(), dp.end(), obstacle) - dp.begin();
      dp[idx] = obstacle;
      ans.push_back(idx + 1);
    }
    return ans;
  }
};
