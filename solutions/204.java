class Solution {
    public int countPrimes(int n) {
        int c=0;
        boolean prine[]=new boolean[n];
        Arrays.fill(prine,true);
        
        for(int i=2;i<n;i++)
        {
            if(prine[i]==true)
            {
                for(int j=2;i*j<n;j++)
                {
                    prine[i*j]=false;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(prine[i]==true)
                c++;
        }
        return c;
    }
}
