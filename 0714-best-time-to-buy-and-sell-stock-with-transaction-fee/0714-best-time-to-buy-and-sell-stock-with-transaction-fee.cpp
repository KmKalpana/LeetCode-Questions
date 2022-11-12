class Solution {
public:
    //  int helper(int ind, int buy, vector<int>&prices,vector<vector<int>>&dp,int fee)
    // {
    //     if(ind==prices.size())
    //         return 0;
    //     if(dp[ind][buy]!=-1)
    //         return dp[ind][buy];
    //     int profit=0;
    //     if(buy){
    //       profit=max(-prices[ind]+helper(ind+1,0,prices,dp,fee),helper(ind+1,1,prices,dp,fee));
    //     }
    //     else
    //     {
    //     profit=max(prices[ind]-fee+helper(ind+1,1,prices,dp,fee),helper(ind+1,0,prices,dp,fee));  
    //     }
    //     return dp[ind][buy]=profit;
    // }
    int maxProfit(vector<int>& prices, int fee) {
       // vector<vector<int>>dp(prices.size()+1,vector<int>(2,-1));
       // return helper(0,1,prices,dp,fee); 
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,0));
        for(int ind=prices.size()-1; ind>=0; ind--)
        {
            for(int buy=0; buy<=1; buy++)
            {
                if(buy==0)
                {
                    dp[ind][buy]=max(dp[ind+1][0],-prices[ind]+dp[ind+1][1]);
                }
                if(buy==1)
                {
                    dp[ind][buy]=max(dp[ind+1][1],prices[ind]-fee+dp[ind+1][0]);
                }
            }
        }
        return dp[0][0];
    }
};