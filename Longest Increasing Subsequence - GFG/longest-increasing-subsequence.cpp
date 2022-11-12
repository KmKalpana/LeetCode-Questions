//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int helper(int a[], int ind,int n, int prev, vector<int>&dp)
    {
        if(ind==n)
         return 0;
         if(dp[prev+1]!=-1) return dp[prev+1];
         int not_take=helper(a,ind+1,n,prev,dp);
         int take=0;
         if(prev==-1 or a[ind]>a[prev])
         {
             take=1+helper(a,ind+1,n,ind,dp);
         }
         return dp[prev+1]=max(take,not_take);
    }
    int longestSubsequence(int n, int a[])
    {
    vector<int>dp(n+1,-1);
      return helper(a,0,n,-1,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends