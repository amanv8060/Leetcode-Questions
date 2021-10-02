import java.util.*;

class Solution {
  int count = 0;

  public void helper(TreeNode root, int max) {
    if (root == null) {
      return;
    }
    if (root.val >= max) {
      max = root.val;
      count += 1;
    }

    helper(root.left, max);
    helper(root.right, max);
  }

  public int goodNodes(TreeNode root) {
    helper(root, root.val);
    return count;
  }
}
