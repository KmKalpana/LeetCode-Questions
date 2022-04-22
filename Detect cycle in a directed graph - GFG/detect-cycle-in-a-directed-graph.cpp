// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCycle(int start, vector<int>adj[], vector<bool>&vis, vector<bool>&dfsvis)
    {
        vis[start]=true;
        dfsvis[start]=true;
        for(auto it: adj[start])
        {
            if(!vis[it])
            {
                if(isCycle(it,adj,vis,dfsvis))return true;
            }
            else if(dfsvis[it])
            {
                return true;
            }
        }
        dfsvis[start]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool>vis(V+1,0);
        vector<bool>dfsvis(V+1,0);
        for(int i=0; i<V; i++)
        {
            if(vis[i]==false)
            {
                if(isCycle(i,adj,vis,dfsvis))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends