#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int countSpecialSubsequences(vector<int>& nums) {
    vector<long long> arr(3, 0);
    int n = nums.size();
    int M = 1e9 + 7;

    for (int i = 0; i < n; i++) {
      if (nums[i] == 0)
        arr[0] = ((arr[0] * 2) % M + 1) % M;
      else if (nums[i] == 1) {
        arr[1] = (arr[0] % M + (arr[1] * 2) % M) % M;
      } else {
        arr[2] = (arr[1] % M + (arr[2] * 2) % M) % M;
      }
    }

    return arr[2] % M;
  }
};
