class Solution {
public:
    int minInsertions(string s) 
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
        return n-dp[n][m];    
    }
};