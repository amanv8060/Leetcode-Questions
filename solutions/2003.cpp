#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  vector<int> smallestMissingValueSubtree(vector<int>& parents,
                                          vector<int>& nums) {
    int n = parents.size();
    vector<int> n2i(100002, -1);
    for (int i = 0; i < n; ++i) n2i[nums[i]] = i;
    if (n2i[1] == -1) return vector<int>(n, 1);

    unordered_set<int> chain;
    for (int i = n2i[1]; i != -1; i = parents[i]) {
      chain.insert(i);
    }
    vector<int> par_on_chain(n, -1);
    function<int(int)> get_chain = [&](int cur) {
      if (cur == -1) return -1;
      if (par_on_chain[cur] != -1) return par_on_chain[cur];
      if (chain.count(cur)) return cur;
      return par_on_chain[cur] = get_chain(parents[cur]);
    };

    vector<int> res(n, -1);
    for (int i = 0; i < n; ++i) {
      par_on_chain[i] = get_chain(i);
      if (!chain.count(i)) res[i] = 1;
    }

    vector<int> child(n, -1);
    for (int node : chain) {
      if (parents[node] == -1) continue;
      child[parents[node]] = node;
    }
    int k = 2;
    for (;; ++k) {
      if (n2i[k] == -1) break;
      int cur = n2i[k];
      int par = par_on_chain[cur];
      int node = child[par];
      child[par] = -1;
      while (node != -1 && res[node] == -1) {
        res[node] = k;
        node = child[node];
      }
    }
    for (int i = 0; i < n; ++i)
      if (res[i] == -1) res[i] = k;
    return res;
  }
};
