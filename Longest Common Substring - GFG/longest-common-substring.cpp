//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int ans=0;
    // int helper(string S1, string S2, int n, int m,vector<vector<int>>&dp)
    // {
    //     if(n==0 || m==0) return 0;
    //     if(dp[n][m]!=-1) return dp[n][m];
    //     int maxi=0,b=0,c=0;
    //     if(S1[n-1]==S2[m-1])
    //     {
    //         maxi=1+helper(S1,S2,n-1,m-1,dp);
    //         ans=max(maxi,ans);
    //     }
    //         b=helper(S1,S2,n-1,m,dp);
    //         c=helper(S1,S2,n,m-1,dp);
        
    //     return dp[n][m]=maxi;
    // }
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
       vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        //helper(S1,S2,n,m,dp);
       //return ans;
       
       for(int i=1; i<=n; i++)
       {
           for(int j=1; j<=m; j++)
           {
               if(S1[i-1]==S2[j-1])
               {
                   dp[i][j]=1+dp[i-1][j-1];
               }
               else
                dp[i][j]=0;
             ans=(dp[i][j]>ans)?dp[i][j]:ans;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends