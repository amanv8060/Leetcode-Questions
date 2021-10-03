#include <bits/stdc++.h>
using namespace std;
class DetectSquares {
 public:
  int arr[1002][1002];
  DetectSquares() {
    for (int i = 0; i < 1002; i++) {
      for (int j = 0; j < 1002; j++) {
        arr[i][j] = 0;
      }
    }
  }

  void add(vector<int> point) { arr[point[0]][point[1]]++; }

  int count(vector<int> point) {
    int p = point[0];
    int q = point[1];
    int ans = 0;
    for (int x = 1; x < 1002; x++) {
      int cnt = 0;
      if (p + x < 1002 && q - x >= 0) {
        cnt = arr[p + x][q] * arr[p + x][q - x] * arr[p][q - x];
        ans += cnt;
      }
      if (p - x >= 0 && q - x >= 0) {
        cnt = arr[p - x][q] * arr[p - x][q - x] * arr[p][q - x];
        ans += cnt;
      }
      if (p - x >= 0 && q + x < 1002) {
        cnt = arr[p - x][q] * arr[p - x][q + x] * arr[p][q + x];
        ans += cnt;
      }
      if (p + x < 1002 && q + x < 1002) {
        cnt = arr[p + x][q] * arr[p + x][q + x] * arr[p][q + x];
        ans += cnt;
      }
    }
    return ans;
  }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */
