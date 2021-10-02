#include <bits/stdc++.h>
using namespace std;

class LockingTree {
  vector<vector<int>> relations;
  // first value will the parent, remaining values will be children.
  vector<int> locked;

 public:
  LockingTree(vector<int>& parent) {
    vector<vector<int>> relations(parent.size());

    for (int i = 0; i < parent.size(); i++) {
      relations[i].push_back(parent[i]);
    }

    for (int i = 0; i < parent.size(); i++) {
      if (parent[i] != -1) relations[parent[i]].push_back(i);
    }

    this->relations = relations;
    vector<int> temp(parent.size(), 0);
    locked = temp;
  }

  bool lock(int num, int user) {
    if (locked[num] != 0) return false;

    locked[num] = user;
    return true;
  }

  bool unlock(int num, int user) {
    if (locked[num] != user) return false;

    locked[num] = 0;
    return true;
  }

  bool upgrade(const int NUM, int user) {
    int num = NUM;

    while (num >= 0) {
      if (locked[num] != 0) return false;
      num = relations[num][0];
    }

    num = NUM;

    // finding out all descendants.
    vector<int> desc;
    queue<int> q;
    q.push(num);
    int count = 0;

    while (q.size()) {
      int cur = q.front();
      q.pop();
      if (locked[cur] != 0) count++;

      for (int i = 1; i < relations[cur].size(); i++) {
        int nx = relations[cur][i];
        q.push(nx);
      }

      desc.push_back(cur);
    }

    // atleast one descendant should have been locked.
    if (count == 0) return false;

    // all conditions met, unlock all the descendants:
    for (int i = 0; i < desc.size(); i++) {
      locked[desc[i]] = 0;
    }

    locked[num] = user;
    return true;
  }
};
