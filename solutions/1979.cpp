#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int findGCD(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int x = nums.size() - 1, a, b, count;
    for (int i = 0; i < nums.size(); i++) {
      a = nums[0];
      b = nums[x];
    }
    if (a <= b) {
      for (int i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0) count = i;
      }
    } else {
      for (int i = 1; i <= b; i++) {
        if (a % i == 0 && b % i == 0) count = i;
      }
    }
    return count;
  }
};
