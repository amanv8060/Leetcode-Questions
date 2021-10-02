#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  long long solver(vector<vector<int>>& rides, int i, int n,
                   vector<long long>& dp) {
    if (i == n) return 0;

    long long ans = 0;
    if (dp[i] != -1) return dp[i];

    ans = max(ans, solver(rides, i + 1, n, dp));

    int j = lower_bound(rides.begin() + i + 1, rides.end(), rides[i][1],
                        [](const vector<int>& a, const int val) {
                          return a[0] < val;
                        }) -
            rides.begin();

    ans = max(ans, solver(rides, j, n, dp) +
                       ((long long)rides[i][2] + rides[i][1] - rides[i][0]));

    return dp[i] = ans;
  }
  long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
    int l = rides.size();
    sort(
        rides.begin(), rides.end(),
        [](const vector<int>& a, const vector<int>& b) { return a[0] < b[0]; });

    vector<long long> dp(l + 1, -1);

    return solver(rides, 0, l, dp);
  }
};
