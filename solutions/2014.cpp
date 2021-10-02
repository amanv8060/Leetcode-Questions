#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int n;
  string s;
  string ans;
  vector<int> cnt;
  string prefix;
  int k;

  bool valid() {
    if (prefix.empty()) return true;
    if (prefix.size() > (n / k)) return false;

    int k1 = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
      if (prefix[j] == s[i]) {
        j++;
        if (j == prefix.size()) {
          k1++;
          j = 0;
        }
      }
    }

    return k1 >= k;
  }

  void dfs() {
    if (valid() == false) return;
    if (ans.size() < prefix.size()) ans = prefix;

    for (char c = 'z'; c >= 'a'; c--) {
      int& d = cnt[c - 'a'];
      if (d < k) continue;
      d -= k;
      prefix.push_back(c);
      dfs();
      prefix.pop_back();
      d += k;
    }
  }

  string longestSubsequenceRepeatedK(string str, int k1) {
    n = str.size();
    k = k1;
    cnt = vector<int>(27, 0);

    for (auto c : str) {
      cnt[c - 'a']++;
    }

    for (auto c : str) {
      if (cnt[c - 'a'] < k) continue;
      s.push_back(c);
    }
    n = s.size();
    prefix.reserve(8);
    dfs();
    return ans;
  }
};
