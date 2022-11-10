//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int helper(int ind, int MW, int wt[], int val[], vector<vector<int> >&dp)
    {
        //SC=O(N*W) + O(N)  //0(N)=Stack size
        if(ind==0)
        {
         if(wt[0]<=MW) return val[0];
        }
        if(ind<0) return 0;
        if(dp[ind][MW]!=-1) return dp[ind][MW];
        int not_Take=0+helper(ind-1,MW,wt,val,dp);
        int take=INT_MIN;
        if(wt[ind]<=MW)
         take=val[ind]+helper(ind-1,MW-wt[ind],wt,val,dp);
         return dp[ind][MW]=max(not_Take,take);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int> >dp(n,vector<int>(W+1,0));
     // int ans= helper(n-1,W,wt,val,dp);
   vector<int>prev(W+1,0),cur(W+1,0);
    for(int w=wt[0]; w<=W; w++)
    {
       // dp[0][w]=val[0];
        prev[w]=val[0];
    }
    // Space optimization
  
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<=W; j++)
        {
            //int not_take=dp[i-1][j];
            int not_take=prev[j];
            int take=INT_MIN;
            if(wt[i]<=j)
              //take=dp[i-1][j-wt[i]]+val[i];
              take=prev[j-wt[i]]+val[i];
            //dp[i][j]=max(not_take,take);
            cur[j]=max(not_take,take);
        }
        prev=cur;
    }
     //  return dp[n-1][W];
     return prev[W];
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends