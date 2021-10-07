#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  long long wonderfulSubstrings(string s) {
    int n = s.size();
    map<long long, long long> mp;
    mp[0] = 1;
    long long count = 0;
    long long mask = 0;
    for (int i = 0; i < n; i++) {
      mask = mask ^ (1 << (s[i] - 'a'));
      if (mp.count(mask)) {
        count += mp[mask];
      }
      for (char j = 'a'; j <= 'j'; j++) {
        long long x = mask ^ (1 << (j - 'a'));
        if (mp.count(x)) {
          count += mp[x];
        }
      }
      mp[mask]++;
    }
    return count;
  }
};
