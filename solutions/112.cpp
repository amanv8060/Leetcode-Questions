#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){return false;}
        if(root->val == targetSum and root->right == NULL and root->left == NULL){return true;}
        return hasPathSum(root->left, targetSum-root->val) or hasPathSum(root->right, targetSum-root->val);
    }
};
