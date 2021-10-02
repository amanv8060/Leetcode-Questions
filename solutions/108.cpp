#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  TreeNode* constructTree(vector<int> nums, int start, int end) {
    if (start > end) {
      return NULL;
    }
    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = constructTree(nums, start, mid - 1);
    root->right = constructTree(nums, mid + 1, end);
    return root;
  }
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    TreeNode* root = constructTree(nums, 0, nums.size() - 1);
    return root;
  }
};
