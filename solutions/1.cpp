#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &arr, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
      int val = target - arr[i];
      if (mp.find(val) != mp.end()) {
        return vector<int>{mp[val], i};
      } else {
        mp[arr[i]] = i;
      }
    }
    return {};
  }
};