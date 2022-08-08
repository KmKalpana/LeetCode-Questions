class Solution {
public:
    int helper(vector<int>&nums, int target, vector<int>&dp,vector<int>temp)
    {
       if(target<0)
           return 0;
        if(target==0)
        {
            cout<<endl;
            return 1;
        }
        int ans=0;
        if(dp[target]!=-1)
            return dp[target];
        for(int i=0; i<nums.size(); i++)
        {
            temp.push_back(nums[i]);
            ans+=helper(nums,target-nums[i],dp,temp);
            temp.pop_back();
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<int>dp(target+1,-1);
        vector<int>temp;
        int ans=helper(nums,target,dp,temp);
        return ans;
    }
};