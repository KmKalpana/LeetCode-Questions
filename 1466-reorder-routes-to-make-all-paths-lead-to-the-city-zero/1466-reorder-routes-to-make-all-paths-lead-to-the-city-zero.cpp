class Solution {
public:
    void reorder(vector<vector<int>>&adj,int node,vector<int>&vis,int &count)
    {
        vis[node]=1;
        for(auto it: adj[node])
        {
            if(!vis[abs(it)])
            {
                if(it>0)
                    count++;
                reorder(adj,abs(it),vis,count);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) 
    {
      vector<vector<int>>adj(n);
        for(auto it : connections)
        {
              int node1=it[0];
              int node2=it[1];
              adj[node1].push_back(node2);
              adj[node2].push_back(-node1);
        }
        int count=0;
        vector<int>vis(n+1,0);
        reorder(adj,0,vis,count);
        return count;
    }
};