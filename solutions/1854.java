class Solution {
    public int maximumPopulation(int[][] logs) {
        int[] year=new int[2051];int max=0;
        for(int[] i:logs){
            year[i[0]]+=1;
            year[i[1]]-=1;
            if(i[1]>max)
                max=i[1];
        }
        int[] prefix=new int[max+1];
        for(int i=1950;i<=max;i++){
            prefix[i]=prefix[i-1]+year[i];
        }
        int my=0,m=0;
        for(int i=1950;i<=max;i++){
            if(m<prefix[i]){
                m=prefix[i];
                my=i;
            }
        }
        return my;
    }
}