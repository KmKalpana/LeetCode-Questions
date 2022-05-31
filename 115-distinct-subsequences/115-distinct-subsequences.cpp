class Solution {
public:
   /* int helper(int n, int m, string s , string t,vector<vector<int>>&dp)
    {
        if(m==0)
            return 1;
        if(n==0)
            return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(s[n-1]==t[m-1])
        {
              return dp[n][m]= helper(n-1,m-1,s,t,dp)+helper(n-1,m,s,t,dp); 
        }
        return dp[n][m]=helper(n-1,m,s,t,dp);
    }*/
    int numDistinct(string s, string t) 
    {
       int n=s.size();
       int m=t.size();
       vector<vector<double>>dp(n+1,vector<double>(m+1,0));  
        for(int j=0; j<=n; j++)
        {
            dp[j][0]=1;
        }
        //return helper(n,m,s,t,dp);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(s[i-1]==t[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return (int)dp[n][m];
    }
};