#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int smallestChair(vector<vector<int>> &times, int targetFriend) {
    int time = times[targetFriend][0];
    vector<int> arrival(time + 1, -1);

    for (int i = 0; i < times.size(); i++) {
      if (times[i][0] <= time)
        arrival[times[i][0]] = i;
    }
    int chair = -1;
    for (int i = 1; i <= time; i++) {
      if (arrival[i] != -1) {
        chair++;
        int j = i;
        while (j < time) {
          int next = arrival[j];
          if (next != -1) {
            arrival[j] = -1;
            j = times[next][1];
          } else
            j++;
        }
        if (j == time)
          break;
      }
    }
    return chair;
  }
};
