class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] pos=new int[2];
        
       pos[0]=FindStartingIndex(nums,target);
       pos[1]=FindEndingIndex(nums,target);
        
        return pos;
        
    }
    
    public int FindStartingIndex(int[] nums,int target)
    {
        int index=-1;
        int start=0;
        int end=nums.length-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;    //To avoid integer overflow in some languages
            
          
            
            if(nums[mid]>=target)
            {
                end=mid-1;
                
            }else
            {
                start=mid+1;
            }
            
              if(nums[mid]==target)
                index=mid;
            
         }
        
        return index;
        
    }
    
    public int FindEndingIndex(int[] nums,int target)
    {
        int index=-1;
        int start=0;
        int end=nums.length-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;    //To avoid integer overflow in some languages
            
            if(nums[mid]<=target)
            {
                start=mid+1;
            }else{
                end=mid-1;
            }
            
            
            
            
            if(nums[mid]==target)
                index=mid;
         }
        
        return index;
    }
}