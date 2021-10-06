#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e) {
      int mid = (s + e) / 2;
      if (arr[mid] == target)
        return mid;
      else if (arr[mid] < target)
        s = mid + 1;
      else
        e = mid - 1;
    }
    return -1;
  }
};
