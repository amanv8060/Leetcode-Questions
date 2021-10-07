#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int countPrimes(int n) {
    if (n < 2) return 0;
    vector<bool> Prime(n + 1, true);

    Prime[0] = false;
    Prime[1] = false;

    Prime[n] = false;

    for (int p = 2; p * p <= n; p++) {
      if (Prime[p] == true) {
        for (int i = p * p; i <= n; i += p) {
          Prime[i] = false;
        }
      }
    }
    int ans = 0;
    for (auto element : Prime) {
      if (element) {
        ans++;
      }
    }
    return ans;
  }
};
