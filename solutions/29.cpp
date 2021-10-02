#include <bits/stdc++.h>
using namespace std

    int
    divide(int dividend, int divisor) {
  long int x, di, div;

  if (dividend == INT_MIN && divisor == -1)
    return INT_MAX;

  else {
    x = dividend / divisor;
    return x;
  }
}
