#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int searchInsert(vector<int>& a, int target) {
    int l = 0, r = (int)a.size() - 1, mid, ans = -1;
    while (l <= r) {
      mid = l + (r - l) / 2;
      if (a[mid] == target) return mid;
      if (a[mid] < target) {
        l = mid + 1;
        ans = mid + 1;
      } else {
        ans = mid;
        r = mid - 1;
      }
    }
    return ans;
  }
};
