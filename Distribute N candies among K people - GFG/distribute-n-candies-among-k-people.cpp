//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<long long> distributeCandies(int N, int k)
    {
      vector<long long>ans(k,0);
      int l=1;
      while(N>0)
      {
          for(int i=0; i<k && N>0; i++)
          {
              if(l<N)
              {
                N=N-l;
              ans[i]+=l++;
              }
              else 
              {
                  ans[i]+=N;
                  N=0;
              }
          }
      }
      return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N>>K;
        
        Solution ob;
        vector<long long> res = ob.distributeCandies(N,K);
        
        for(int i=0; i<res.size(); i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends