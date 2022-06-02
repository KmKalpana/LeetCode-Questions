class Solution {
public:
    /*int helper(int ind, int n, vector<int>&prices, int buy, vector<vector<int>>&dp)
    {
        if(ind==n)
            return 0;
        if(dp[ind][buy]!=-1)
            return dp[ind][buy];
        int profit=0;
        if(buy)
        {
        profit=max(-prices[ind]+helper(ind+1,n,prices,0,dp),0+helper(ind+1,n,prices,1,dp));
        }
        else
        {
         profit=max(prices[ind]+helper(ind+1,n,prices,1,dp),0+helper(ind+1,n,prices,0,dp));
        }
        return dp[ind][buy]=profit;
    }*/
    int maxProfit(vector<int>& a) 
    {
      //int n=prices.size();
        // vector<vector<int>>dp(n,vector<int>(2,-1));
       //return helper(0,n,prices,1,dp);
        if(a.size()==1)
            return 0;
        int profit=0;
        for(int i=1; i<a.size(); i++)
        {
          if(a[i]>a[i-1])
          {
              profit+=(a[i]-a[i-1]);
          }
        }
        return profit;
    }
};