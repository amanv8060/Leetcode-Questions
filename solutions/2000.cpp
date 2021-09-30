#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  string reversePrefix(string word, char ch) {
    string s1 = word;
    int pos = 0;
    for (int i = 0; i < word.size(); i++) {
      if (word[i] == ch) {
        pos = i;
        break;
      }
    }
    if (pos != 0) reverse(word.begin(), word.begin() + pos + 1);
    return word;
  }
};