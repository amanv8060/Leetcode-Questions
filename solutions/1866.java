class Solution {
    public boolean findRotation(int[][] mat, int[][] target) {
        for(int i=1;i<=4;i++){
            if(Arrays.deepEquals(mat,target))
                return true;
            mat=rotate(mat);
        }
        return false;
    }
    static int[][] rotate(int[][] m){
        int temp,n=m.length;
        int[][] ans=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=m[j][i];
                ans[j][i]=m[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                temp=ans[i][j];
                ans[i][j]=ans[i][n-j-1];
                ans[i][n-j-1]=temp;
            }
        }
        return ans;
    }
}