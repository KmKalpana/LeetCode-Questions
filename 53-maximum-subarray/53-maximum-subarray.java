class Solution {
    public int maxSubArray(int[] nums) {
        int max=nums[nums.length-1];
        int temp=max;
        for(int i=nums.length-2;i>=0;i--){
            if(temp<0)temp=nums[i];
            else temp=nums[i]+temp;
            
            if(temp>max)max=temp;
        }
        
        return max;
        
        
    }
}