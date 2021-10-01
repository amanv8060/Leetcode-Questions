#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        if(n==0) return 0;
        vector<int> lvect, rvect, vect;
        int left = a[0];
        for(int i=0; i<n; i++) {
            left = max(left, a[i]);
            lvect.push_back(left);
        }
        int right = a[n-1];
        for(int i=n-1; i>=0; i--) {
            right = max(right, a[i]);
            rvect.push_back(right);
        }
        reverse(rvect.begin(), rvect.end());
        for(int i=0; i<n; i++) {
            vect.push_back(min(lvect[i], rvect[i]) - a[i]);
        }
        int sum = 0;
        sum = accumulate(vect.begin(), vect.end(), sum);
        return sum;
    }
};