#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int reverse(int x) {
    int temp = abs(x);
    long long ans = 0;
    while (temp > 0) {
      ans = ans * 10 + temp % 10;
      temp /= 10;
    }
    if (x > 0)
      return ans > INT_MAX || ans < INT_MIN ? 0 : ans;
    else
      return ans > INT_MAX || ans < INT_MIN ? 0 : -(ans);
  }
};
