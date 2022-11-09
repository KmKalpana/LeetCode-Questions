//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    const int m=1e9+7;
   int helper(int n, vector<int>&dp)
   {
       if(n==0 || n==1 || n==2)
       return n;
       if(dp[n]!=-1)
       return dp[n];
       int s1=helper(n-1,dp);
       int s2=helper(n-2,dp);
      // s1=s1%m;
       //s2=s2%m;
       return dp[n]=(s1+s2)%m;
       
   }
    int countWays(int n)
    {
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
      return helper(n,dp);   
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends