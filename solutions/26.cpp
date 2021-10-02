#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int k = 0, i = 0;
    if (n == 0) return 0;
    nums[k] = nums[0];
    k = k + 1;
    for (i = 1; i < n; i++) {
      if (nums[i] != nums[i - 1]) {
        nums[k] = nums[i];
        k++;
      }
    }
    return k;
  }
};
