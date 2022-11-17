class Solution {
public:
    int mod=1e9+7;
   int helper(int startPos, int endPos, int k,vector<vector<int>>&dp)
    {
          if(k==0)
           {
               if(startPos==endPos)
                   return 1;
               return 0;
           }
       if(dp[1000+startPos][k]!=-1)
           return dp[1000+startPos][k]%mod;
        int left=helper(startPos-1,endPos,k-1,dp);
        int right=helper(startPos+1,endPos,k-1,dp);
        return dp[1000+startPos][k]=(left+right)%mod;
    }
    int numberOfWays(int startPos, int endPos, int k) 
    {
        vector<vector<int>>dp(3000,vector<int>(k+1,-1));
        return helper(startPos,endPos,k,dp);
    }
};