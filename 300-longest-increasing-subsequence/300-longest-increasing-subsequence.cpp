class Solution {
public:
    int helper(int ind, int prevInd, int n, vector<int>&nums, vector<vector<int>>&dp)
    {
        if(ind==n)
            return 0;
        if(dp[ind][prevInd+1]!=-1)
            return dp[ind][prevInd+1];
        int len=0+helper(ind+1,prevInd,n,nums,dp);
        int len1=0;
        if(prevInd==-1 || nums[ind]>nums[prevInd])
        {
          len1=1+helper(ind+1,ind,n,nums,dp);  
        }
        return dp[ind][prevInd+1]=max(len,len1);
    }
    int lengthOfLIS(vector<int>& nums) 
    {
     int n=nums.size();
      vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return helper(0,-1,n,nums,dp);
    }
};