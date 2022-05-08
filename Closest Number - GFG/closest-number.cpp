// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int closestNumber(int N , int M) {
        int f=N/M*M;
        int s;
        if(N>0)
        s=(abs(N/M)+1)*abs(M);
        else
        s= -1*(abs(N/M)+1)*abs(M);
        if(abs(N-f)<abs(s-N))
        return f;
        else
        return s;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends