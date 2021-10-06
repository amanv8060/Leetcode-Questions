#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<string> buildArray(vector<int>& target, int n) {
    vector<string> stack;
    int counter = 0;

    for (int i = 1; i <= n; i++) {
      if (target.size() == 0 || counter >= target.size()) {
        return stack;
      }
      stack.push_back("Push");
      if (i != target[counter]) {
        stack.push_back("Pop");
      } else {
        counter++;
      }
    }
    return stack;
  }
};