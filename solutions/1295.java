static int findNumbers(int[] nums) {
        int count =0;
        for(int i=0;i<nums.length;i++){
            int x=(int)(Math.log10(nums[i])) +1; //this will return no. of digits of number
                if(x%2==0)
                count++;
            }
            
        return count;
    }
    
}
