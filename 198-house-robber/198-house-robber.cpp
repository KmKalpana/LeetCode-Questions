class Solution {
public:
    int helper(vector<int>&nums, int ind, vector<int>&dp)
    {
        if(ind<0)
            return 0;
       if(dp[ind]!=-1)
          return dp[ind];
        int not_take=0+helper(nums,ind-1,dp);
        int take=nums[ind]+helper(nums,ind-2,dp);
        return dp[ind]=max(not_take,take);
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n+1, -1);
       return helper(nums,n-1,dp);    
    }
};