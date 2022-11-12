class Solution {
public:
        int helper(int ind, int buy, int capacity, vector<int>&prices,vector<vector<vector<int>>>&dp)
     {
             if(ind==prices.size()|| capacity==0) return 0;
         if(dp[ind][buy][capacity]!=-1) return dp[ind][buy][capacity];
         int profit=0;
         if(buy==0)
         {
        profit=max(helper(ind+1,0,capacity,prices,dp), -prices[ind]+helper(ind+1,1,capacity,prices,dp));
         }
        if(buy==1)
         {
        profit+=max(helper(ind+1,1,capacity,prices,dp), prices[ind]+helper(ind+1,0,capacity-1,prices,dp));
         }
        return dp[ind][buy][capacity]=profit; 
     }
    int maxProfit(int k, vector<int>& prices)
    {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return helper(0,0,k,prices,dp);   
    }
};