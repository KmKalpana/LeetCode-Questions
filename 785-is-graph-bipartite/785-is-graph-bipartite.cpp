class Solution {
public:
    bool dfs(int node, vector<vector<int>> &graph,vector<int>&point)
    {
        for(auto it: graph[node])
        {
            if(point[it]==-1)
            {
                point[it]= point[node]==0?1:0;
                if(!dfs(it,graph,point))
                    return false;
            }
            else if(point[it]==point[node])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        vector<int>point(n,-1);
        for(int i=0; i<n; i++)
        {
            if(point[i]==-1)
            {
                 if(!dfs(i,graph,point))
                 {
                     return false;
                 }
            }
        }
       return true;
    }
};