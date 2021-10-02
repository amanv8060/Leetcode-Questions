#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    for (int i = 0; i < gcd(n, k); ++i)
      for (int ii = (i + k) % n; i != ii; ii = (ii + k) % n)
        swap(nums[i], nums[ii]);
  }
};
