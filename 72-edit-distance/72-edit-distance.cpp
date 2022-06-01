class Solution {
public:
   #include <bits/stdc++.h> 
int helper(int n, int m, string &s, string &t, vector<vector<int>>&dp)
    {
        if(n==0)
        { 
            return m; 
        }
        if(m==0)
        { 
            return n; 
        }
     if(dp[n][m]!=-1)
         return dp[n][m];
        if(s[n-1]==t[m-1])
        {
          return dp[n][m]= helper(n-1,m-1,s,t,dp);
        }
        return dp[n][m]=1+min(helper(n-1,m,s,t,dp),min(helper(n,m-1,s,t,dp),helper(n-1,m-1,s,t,dp)));
    }
int minDistance(string str1, string str2)
{
     int n=str1.size();
        int m=str2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return helper(n,m,str1,str2,dp);
}
};