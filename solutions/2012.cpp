class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
         if(nums.size()==0)
            return 0;
    
     
        int sum=0;
        
        int left=nums[0];
        vector<int>temp=nums;
        sort(temp.begin()+2,temp.end());
        int right=temp[2];

        for(int i=1;i<=nums.size()-2;i++){
            int maxim=0;
            
            if(nums[i-1]>left)
                left=nums[i-1];
        
                right=temp[i+1];
            
            if(nums[i]>left && nums[i]<right)
               maxim=max(maxim,2);
            else
            if(nums[i]>nums[i-1] && nums[i]<nums[i+1])
                maxim=max(maxim,1);
            sum+=maxim;
        }
        return sum;
    }
};