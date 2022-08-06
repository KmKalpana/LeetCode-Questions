class Solution {
public:
    int helper(vector<int>&nums, int target, vector<int>&dp)
    {
       if(target<0)
           return 0;
        if(target==0)
            return 1;
        int ans=0;
        if(dp[target]!=-1)
            return dp[target];
        for(int i=0; i<nums.size(); i++)
        {
            ans+=helper(nums,target-nums[i],dp);
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<int>dp(target+1,-1);
        int ans=helper(nums,target,dp);
        return ans;
    }
};