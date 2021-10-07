#include <bits/stdc++.h>
using namespace std;
int Mod = 1000000007;
class Solution {
 public:
  int firstDayBeenInAllRooms(vector<int>& nextVisit) {
    int n = nextVisit.size();
    vector<int> prefix(n + 1, 0);
    int j;
    for (int i = 0; i < n; i++) {
      j = nextVisit[i];
      if (j == i) {
        prefix[i + 1] = ((prefix[i]) % Mod + 2) % Mod;
      } else {
        int k = ((prefix[i] - prefix[j] + Mod) % Mod + 2) % Mod;
        prefix[i + 1] = ((prefix[i]) % Mod + (k) % Mod) % Mod;
      }
    }
    int ans = prefix[n - 1] % Mod;
    cout << prefix[n - 1];
    return ans;
  }
};
