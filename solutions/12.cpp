#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  string intToRoman(int num) {
    // 1000, 2000, 3000
    string M[] = {"", "M", "MM", "MMM"};
    // 100, 200, 300, .. 900
    string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    // 10, 20, ... 90
    string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    // 1, 2, ... 9
    string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    return M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] +
           I[num % 10];
  }
};
