class Solution {
public:
     /* bool helper(int n, int m, string pat, string s,vector<vector<int>>&dp)
      {
          if(n==0 && m==0)
              return true;
          if(m>0 && n==0)
              return false;
          if(n>0 && m==0)
          {
              for(int i=0; i<n; i++)
              {
                  if(pat[i]!='*')
                      return false;
              }
              return true;
          }
          if(dp[n][m]!=-1)
              return dp[n][m];
          if(pat[n-1]==s[m-1] || pat[n-1]=='?')
          {
              return dp[n][m]=helper(n-1,m-1,pat,s,dp);
          }
          if(pat[n-1]=='*')
          {
              return dp[n][m]= helper(n-1,m,pat,s,dp) || helper(n,m-1,pat,s,dp);
          }
          return dp[n][m]=false;
      }*/
    bool isMatch(string s, string pat) {
         int n=s.length();
        int m=pat.length();
        // return helper(m,n,p,s,dp);
        vector<vector<int>>dp(n+1,vector<int>(m+1,false));
       dp[0][0]=true;
        for(int j=0; j<m && pat[j]=='*'; j++)
        {
            dp[0][j+1]=true;
        }
        for(int i=1; i<=n; i++)
        {
          for(int j=1; j<=m; j++)
           {
            if(pat[j-1]=='?' || pat[j-1]==s[i-1])
              {
                dp[i][j]=dp[i-1][j-1];                                
              }
             else if(pat[j-1]=='*')
              {
               dp[i][j]=dp[i-1][j] || dp[i][j-1];                                 
              }
           }
        }
     return dp[n][m] ;
   }
    
};