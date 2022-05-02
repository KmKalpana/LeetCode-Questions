// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) 
{
  stack<int>st;
  queue<int>pq;
  int i=0; 
  while(i<k)
  {
      int node=q.front();
      q.pop();
      st.push(node);
      i++;
  }
  while(!st.empty())
  {
      int node=st.top();
      st.pop();
      pq.push(node);  
  }
  while(!q.empty())
  {
      int node=q.front();
      q.pop();
      pq.push(node);
  }
  return pq;
}