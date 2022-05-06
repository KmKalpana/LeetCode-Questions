class Solution {
public:
    int find(int node, vector<int>&parent)
    {
        if(node==parent[node])
            return node;
        return find(parent[node],parent);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        vector<int>parent(10000,0);
     for(int i=0; i<edges.size(); i++)
     {
         parent[i]=i;
     }
        vector<int>ans;
    for(auto it: edges)
    {
        int x=find(it[0],parent);
        int y=find(it[1],parent);
        if(x==y)
        {
           return {it[0],it[1]}; 
        }
        else 
        {
            parent[y]=x;
        }
    }
       // return ans; 
        return {};
    }
};