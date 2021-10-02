#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int countKDifference(vector<int>& nums, int k) {
    unordered_map<int, int> mp;

    int ans = 0;

    for (int i = 0; i < nums.size(); ++i) {
      int target1 = nums[i] + k;
      int target2 = nums[i] - k;

      if (mp.find(target1) != mp.end()) {
        ans += mp[target1];
      }

      if (mp.find(target2) != mp.end()) {
        ans += mp[target2];
      }

      ++mp[nums[i]];
    }

    return ans;
  }
};
