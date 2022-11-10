// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
bool helper(int index, int target, vector<int>&arr, vector<vector<bool>>&dp)
{
    if(target==0)
        return true;
    if(index==0)
        return arr[0]==target;
    if(dp[index][target]!=-1)
        return dp[index][target];
    bool not_take=helper(index-1,target,arr,dp);
    bool take=false;
    if(target>=arr[index])
    {
        take=helper(index-1,target-arr[index],arr,dp);
    }
    return dp[index][target]=not_take || take;
}
    bool isSubsetSum(vector<int>arr, int k){
        int n=arr.size();
          vector<vector<bool>>dp(n+1,vector<bool>(k+1,0));
     // return helper(n-1,k,arr,dp);
       for(int i=0; i<=n; i++)
        {
            dp[i][0]=true;
        }
        //  for(int j=1; j<=k; j++)
        //  {
        //      dp[0][j]=false;
        //  }
      // dp[0][arr[0]]=true;
       for(int i=1; i<=n; i++)
       {
           for(int j=1; j<=k; j++)
           {
               if(arr[i-1]<=j)
               {
                  bool not_take=dp[i-1][j];
                  bool take=dp[i-1][j-arr[i-1]];
                  dp[i][j]=not_take || take;
               }
               else
               {
                   dp[i][j]=dp[i-1][j];
               }
           }
       }
      return dp[n][k];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends