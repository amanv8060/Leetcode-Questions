#include <bits/stdc++.h>
using namespace std;



class Solution {
    
    bool check(TreeNode* l, TreeNode* r){
        if(!l){
            return !r;
        }
        if(!r)
            return !l;
        
        else{
            return check(l->left, r->right) && check(l->right, r->left) && (l->val == r->val);
            
        }
        
        
    }
    
public:
    bool isSymmetric(TreeNode* root) {
        
        
            return check(root->left, root->right);
        
       
        
    }
};
