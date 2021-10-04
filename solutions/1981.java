class Solution {
    Map<String, Integer> memo;
    public int minimizeTheDifference(int[][] mat, int target) {
        int m = mat.length;
        int n = mat[0].length;
        SortedSet<Integer>[] sets = new TreeSet[m];
        memo = new HashMap<>();
        for(int i = 0; i < m; i++){
            sets[i] = new TreeSet<>();
            for(int j = 0; j < n; j++){
                sets[i].add(mat[i][j]);
            }
        }
        return dfs(sets, 0, 0, target);
    }
    
    int dfs(SortedSet<Integer>[] sets, int i, int sum, int target){
        if(i == sets.length) return Math.abs(target - sum);
        String key=i+""+sum;
        if(memo.containsKey(key)) return memo.get(key);
        Iterator<Integer> it = sets[i].iterator();
        int minSum = Integer.MAX_VALUE;
        while(it.hasNext()){
            int e = it.next();
            minSum = Math.min(minSum, dfs(sets, i+1, sum+e, target));
            if(minSum == 0 || sum + e >= target) break;
        }
        memo.put(key, minSum);
        return minSum;
    }
}