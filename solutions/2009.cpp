#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int minOperations(vector<int>& nums) {
        // If there is only a single element
        // No need to make any operations
        if(nums.size() == 1){
            return 0;
        }
        
        int n = nums.size();
        int res = 0;
        sort(nums.begin(),nums.end());
        
        // Using two functions simultaneously to first replace the duplicates
        // followed by removing them
        
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        // Size of the trimmed array
        int m = nums.size();
        
        // Since the array is sorted each time take the difference
        // of first and last element and check if it is greater than 
        // the size of the array, actually one less than the size.
        queue<int> qtr;
        for(auto itr : nums) {
            qtr.push(itr);
            while((qtr.back() - qtr.front()) > n - 1){
                qtr.pop();
            }
            res = max(res, (int)qtr.size());
        }
        res = n - res;
        return res;
    }   
};