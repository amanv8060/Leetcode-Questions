#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool isPalindrome(int x) {
    long int temp1 = x, temp2, rev = 0;

    if (x < 0) {
      return false;
    }

    else {
      while (temp1 > 0) {
        temp2 = temp1 % 10;
        rev = rev * 10 + temp2;
        temp1 /= 10;
      }
    }
    if (rev == x)
      return true;
    else
      return false;
  }
};
