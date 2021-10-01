<<<<<<< HEAD
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        
        sort(nums1.begin(), nums1.end());
        
        if (n % 2 == 0) {
            return (nums1[n/2-1] + nums1[n/2])/2.0;
        } else {
            return nums1[n/2];
        }
    }
=======
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size() + nums2.size();

    nums1.insert(nums1.end(), nums2.begin(), nums2.end());

    sort(nums1.begin(), nums1.end());

    if (n % 2 == 0) {
      return (nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
    } else {
      return nums1[n / 2];
    }
  }
>>>>>>> beac92b03c5e6b2d29ddf3693b8b6449df7e5979
};
