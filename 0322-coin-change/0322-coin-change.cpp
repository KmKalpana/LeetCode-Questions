class Solution {
public:
    int helper(int ind, int amount, vector<int>&coins, vector<vector<int>>&dp)
    {
        
        if(ind==0 ) if(amount%coins[ind]==0) return amount/coins[ind]; else return 1e9;
          //if(ind<0) return INT_MAX;
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int not_pic=helper(ind-1,amount,coins,dp);
        int pic=1e9;
        if(coins[ind]<=amount)
           pic=1+helper(ind,amount-coins[ind],coins,dp);
        return dp[ind][amount]=min(not_pic,pic);
    }
    int coinChange(vector<int>& coins, int amount) {
         int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=helper(n-1,amount,coins,dp);
        return ans==1e9?-1:ans;
        /* int dp[n+1][amount+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=amount; j++)
            {
                if(j==0)
                {
                    dp[i][j]=0;
                }
                else if(i==0)
                {
                    dp[i][j]=1e3;
                }
                else if(coins[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]= min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
            }
        }
        return dp[n][amount]==1e3?-1:dp[n][amount];
        */
    }
};