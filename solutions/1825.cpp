#include <bits/stdc++.h>
using namespace std;

class MKAverage {
 public:
  set<pair<int, int>> mini, midi, maxi;
  queue<pair<int, int>> q;
  int id, k, n, m, lim, sum;

  MKAverage(int m, int k) {
    sum = id = 0, this->k = k, this->m = m, n = m - k - k, lim = m + 1;
  }

  void addElement(int num) {
    q.push({num, ++id});

    if (q.size() == lim) {
      auto p = q.front();
      q.pop();

      if (mini.count(p))
        mini.erase(p);  // delete old
      else if (maxi.count(p))
        maxi.erase(p);
      else
        midi.erase(p), sum -= p.first;

      if (mini.size() != k) {  // replace
        mini.insert(*midi.begin()), sum -= midi.begin()->first;
        midi.erase(*midi.begin());
      } else if (maxi.size() != k) {
        maxi.insert(*midi.rbegin()), sum -= midi.rbegin()->first;
        midi.erase(*midi.rbegin());
      }

      if (num >= mini.rbegin()->first && num <= maxi.begin()->first)
        midi.insert({num, id}), sum += num;  // insert new
      else if (num < mini.rbegin()->first) {
        sum += mini.rbegin()->first;
        midi.insert(*mini.rbegin());
        mini.erase(*mini.rbegin());
        mini.insert({num, id});
      } else {
        sum += maxi.begin()->first;
        midi.insert(*maxi.begin());
        maxi.erase(*maxi.begin());
        maxi.insert({num, id});
      }
    } else if (q.size() == m) {
      vector<pair<int, int>> v(m);

      for (int i = 0; i != m; i++) {
        q.push(v[i] = q.front());
        q.pop();
      }

      sort(v.begin(), v.end());
      int i = 0;
      while (i != k) mini.insert(v[i++]);
      for (int l = k + n; i != l; i++) midi.insert(v[i]), sum += v[i].first;
      while (i != m) maxi.insert(v[i++]);
    }
  }

  int calculateMKAverage() { return q.size() == m ? sum / n : -1; }
};
