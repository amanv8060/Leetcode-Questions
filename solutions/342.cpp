#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool isPowerOfFour(int n) {
    if (n <= 0) return false;
    n = abs(n);
    while (n % 4 == 0) n = n / 4;
    return n == 1;
  }
};