#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return;

        int i = 1;
        int lastInc = -1;
        while (i < n)
        {
            //Find the peak of last ASC order
            if (nums[i] > nums[i - 1])
                lastInc = i;
            i += 1;
        }

        if (lastInc == -1)
        {
            //Check if array is DSC
            {
                sort(nums.begin(), nums.end());
            }
            return;
        }

        //Find element in the range (nums[lastInc-1] to nums[lastInc]) to the right
        //int mn = nums[lastInc];
        int index = lastInc;
        for (i = lastInc; i < n; ++i)
        {
            if (nums[i] > nums[lastInc - 1] and nums[i] < nums[index])
            {
                index = i;
            }
        }
        swap(nums[lastInc - 1], nums[index]);
        sort(nums.begin() + lastInc, nums.end());
    }
};