#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int findMiddleIndex(vector<int>& nums) {
    int l = nums.size();
    vector<int> pre(l + 2, 0), post(l + 2, 0);

    pre[1] = nums[0];
    post[l] = nums[l - 1];

    for (int i = 2; i <= l; i++) {
      pre[i] = pre[i - 1] + nums[i - 1];
    }
    for (int i = l - 1; i >= 1; i--) {
      post[i] = post[i + 1] + nums[i - 1];
    }

    int ans = -1;
    for (int i = 1; i <= l; i++) {
      int pr = pre[i - 1];
      int ps = post[i + 1];
      if (pr == ps) {
        ans = i - 1;
        break;
      }
    }

    return ans;
  }
};