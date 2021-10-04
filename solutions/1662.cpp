#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int n1 = word1.size();
    int n2 = word2.size();
    string str1;
    string str2;

    for (int i = 0; i < n1; i++) {
      str1 = str1 + word1[i];
    }
    for (int i = 0; i < n2; i++) {
      str2 = str2 + word2[i];
    }
    if (str1 == str2) {
      return true;
    }
    return false;
  }
};
