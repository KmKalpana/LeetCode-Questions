class Solution {
public:
    int helper(int ind, vector<int>&cost,vector<int>&dp)
    {
        
       if(ind==1 || ind==0)
       {
           return cost[ind];
       }
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
    return dp[ind]=cost[ind]+min(helper(ind-1,cost,dp),helper(ind-2,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
      vector<int>dp(n+1,-1); 
        return min(helper(n-1,cost,dp),helper(n-2,cost,dp));
    }
};