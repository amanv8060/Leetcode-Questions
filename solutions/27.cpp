#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int k = nums.size();
    int beg = 0;
    for (int i = 0; i < k; i++) {
      if (nums[i] != val) {
        nums[beg] = nums[i];
        beg++;
      }
    }
    return beg;
  }
};
