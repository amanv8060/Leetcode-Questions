#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int profit = 0, price = INT_MAX;
    for (int i = 0; i < prices.size(); i++) {
      price = min(price, prices[i]);
      int present_profit = prices[i] - price;
      profit = max(present_profit, profit);
    }
    return profit;
  }
};
