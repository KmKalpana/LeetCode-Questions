//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
//   int helper(int ind, int W, int val[], int wt[], vector<vector<int>>&dp)
//   {
//       if(ind == 0){
//         return ((int)(W/wt[0])) * val[0];
//     }
//         if(dp[ind][W]!=-1) return dp[ind][W];
//         int not_take=helper(ind-1,W,val,wt,dp);
//         int take=INT_MIN;
//         if(wt[ind]<=W)
//           take=val[ind]+helper(ind,W-wt[ind],val,wt,dp);
//          return dp[ind][W]=max(not_take,take);
//   }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N+1,vector<int>(W+1,0));
      //  return helper(N-1,W,val,wt,dp);
         for(int i=wt[0]; i<=W; i++){
        dp[0][i] = ((int) i/wt[0]) * val[0];
         }
      for(int i=1; i<N; i++)
      {
          for(int weight=1; weight<=W; weight++)
          {
              int not_take=dp[i-1][weight];
              int take=INT_MIN;
              if(wt[i]<=weight)
                take=val[i]+dp[i][weight-wt[i]];
            dp[i][weight]=max(take,not_take);
          }
      }
      return dp[N-1][W];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends