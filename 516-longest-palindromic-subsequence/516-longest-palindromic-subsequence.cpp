class Solution {
public:
   /* int helper(string s, string t, int n, int m, vector<vector<int>>&dp)
    {
        if(n==-1 || m==-1)
        {
            return 0;
        }
        if(s[n]==t[m])
        {
           return dp[n][m]=1+helper(s,t,n-1,m-1,dp);
        }
        return dp[n][m]=max(helper(s,t,n-1,m,dp),helper(s,t,n,m-1,dp));
    }*/
    int longestPalindromeSubseq(string s) 
    {
       string t=s;
       reverse(t.begin(), t.end());
       int n=s.length();
        int m=n;
       vector<vector<int>>dp(n+1,vector<int>(n+1,0));
      // return helper(s,t,n-1,n-1,dp);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(s[i-1]==t[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};