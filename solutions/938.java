import java.util.*;

class Solution {
  int sum = 0;

  public void helper(TreeNode root, int low, int high) {
    if (root == null) {
      return;
    }
    if (root.val > low) {
      helper(root.left, low, high);
    }
    if (root.val >= low && root.val <= high) {
      sum += root.val;
    }
    if (root.val < high) {
      helper(root.right, low, high);
    }
  }

  public int rangeSumBST(TreeNode root, int low, int high) {
    helper(root, low, high);
    return sum;
  }
}
