#include <bits/stdc++.h>
using namespace std;
int numberOfWeakCharacters(vector<vector<int>>& pr) {
  int n = pr.size();
  sort(pr.begin(), pr.end());
  int t_attack = pr[n - 1][0], t_defense = pr[n - 1][1], level_defense = 0,
      count = 0;

  for (int i = n - 1; i > 0; i--) {
    if (pr[i][0] == pr[i - 1][0]) {
      t_defense = max(t_defense, pr[i - 1][1]);
      if (pr[i - 1][1] < level_defense) {
        count++;
      }
    } else {
      level_defense = max(level_defense, t_defense);
      t_defense = pr[i - 1][1];
      if (pr[i - 1][1] < level_defense || pr[i][1] > pr[i - 1][1]) {
        count++;
      }
    }
  }
  return count;
}
};
