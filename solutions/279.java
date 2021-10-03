class Solution {
    
    public int numSquares(int n) {
        int [] arr=new int[n+1];
        arr[n]=0;
        for(int i=n-1;i>=0;i--){
            int min=Integer.MAX_VALUE;
            for(int j=1;i+j*j<=n;j++){
                if(arr[i+j*j]<min)
                    min=arr[i+j*j];
            }
            arr[i]=1+min;
        }
        
        return arr[0];
    }   
}

int numSquares(int n) {
    static vector<int> dp {0};
    int m = dp.size();
    dp.resize(max(m, n+1), INT_MAX);
    for (int i=1, i2; (i2 = i*i)<=n; ++i)
        for (int j=max(m, i2); j<=n; ++j)
            if (dp[j] > dp[j-i2] + 1)
                dp[j] = dp[j-i2] + 1;
    return dp[n];
}
