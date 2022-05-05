class Solution {
public:
    void dfs(int node,vector<vector<int>>&adj,vector<int>&vis)
    {
        vis[node]=1;
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) 
    {
      if(n>connections.size()+1)
      {
          return-1;
      }
        vector<vector<int>>adj(n);
        for(auto it : connections)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n,false);
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(i,adj,vis);
            }
        }
        return ans-1;
    }
};