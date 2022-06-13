// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int N, long long int K)
{
  vector<long long>res;
  long long start=0, end=0;
  queue<long long>q;
   while(end<N)
    {
        if(a[end]<0)
        {
            q.push(a[end]);
        }
     if(end-start+1<K)
     {
         end++;
     }
     else if(end-start+1==K)
     {
         if(q.size()==0)
         {
             res.push_back(0);
         }
         else
         {
         res.push_back(q.front());
         }
         if(a[start]<0)
          {
              q.pop();
          }
        start++;
        end++;
     }
  }
 return res;
}