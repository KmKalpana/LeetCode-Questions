//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int helper(int *Arr, int ind, vector<int>&dp)
	{
	    if(ind<0)
	      return 0;
	    if(dp[ind]!=-1)
	      return dp[ind];
	     int maxi1=0,maxi2=0;
	     maxi1=helper(Arr,ind-1,dp);
	     maxi2=helper(Arr,ind-2,dp)+Arr[ind];
	     return dp[ind]=max(maxi1,maxi2);
	}
	int findMaxSum(int *arr, int n) 
	{
	   vector<int>dp(n+1,-1);   
	   return helper(arr,n-1,dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends