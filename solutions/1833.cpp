#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());

    int able_to_buy = 0;

    for (int i = 0; i < costs.size(); i++) {
      if (coins - costs[i] >= 0) {
        able_to_buy++;
        coins -= costs[i];
      }
    }

    return able_to_buy;
  }
};
