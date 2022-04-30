class Solution {
public:
    void dfs(vector<vector<int>>&adj,int node,vector<vector<int>>&res,vector<int>&vis, vector<int>&v,int target)
    {
        v.push_back(node);
        if(node==target)
        {
             res.push_back(v); 
             v.pop_back();
            return ;
        }
         vis[node]=1;
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                dfs(adj,it,res,vis,v,target);
            }
        }
        vis[node]=0;
        v.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph)
    {
        int n=graph.size()-1;
        vector<int>vis(n+1,0);
        vector<vector<int>>res;
        vector<int>v;
        dfs(graph,0,res,vis,v,n);
        return res;
    }
};