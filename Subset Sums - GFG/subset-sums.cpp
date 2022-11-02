//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
  vector<int>ans;
  void helper(vector<int>arr, int ind, int N, int &sum)
  {
      if(ind==N)
      {
         ans.push_back(sum);  
         return ;
      }
      helper(arr,ind+1,N,sum);
       sum+=arr[ind];
       helper(arr,ind+1,N,sum);
       sum-=arr[ind];
  }
    vector<int> subsetSums(vector<int> arr, int N)
    {
         int sum=0;
         helper(arr,0,N,sum);
         return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends