class Solution {
public:
    int helper(vector<int>&coins,int ind,int amount,vector<vector<int>>&dp)
    {
        if(ind<0 || amount<0)
            return 0;
        if((ind==0 && amount-coins[ind]==0) || amount==0)
            return 1;
        if(dp[ind][amount]!=-1)
            return dp[ind][amount];
        int not_take=helper(coins,ind,amount-coins[ind],dp);
        int take=helper(coins,ind-1,amount,dp);
        return dp[ind][amount]=not_take+take; 
    }
    int change(int amount, vector<int>& coins) 
    {
      vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
       return helper(coins,coins.size()-1,amount,dp);
    }
};