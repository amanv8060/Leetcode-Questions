class Solution {
  List<String> solutions = new ArrayList<String>();

  public List<String> generateParenthesis(int n) {
    dfs(n, 0, 0, "");
    return solutions;
  }

  public void dfs(int n, int open, int closed, String curr) {
    if (n == open && n == closed) {
      solutions.add(curr);
      return;
    }
    if (open < n) {
      dfs(n, open + 1, closed, curr + "(");
    }
    if (closed < open) {
      dfs(n, open, closed + 1, curr + ")");
    }
  }
}
