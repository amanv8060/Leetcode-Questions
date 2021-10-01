#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        for (auto it = nums.begin(); it != nums.end(); it++){
            for (auto jt = it+1; jt != nums.end(); jt++){
                if(abs((*it)-(*jt))==k){
                    count++;
                }
            }
            
        }
        return count;
    }
};
