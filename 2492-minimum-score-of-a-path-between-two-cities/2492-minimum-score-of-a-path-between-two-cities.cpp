class Solution {
public:
    
    int minScore(int n, vector<vector<int>>& roads)
    {
       vector<int>vis(n+1,0);
        vector<pair<int,int>>adj[n+1];
        for(auto it: roads)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        queue<int>q;
        q.push(1);
        int mini=1e5;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                int node=q.front();
                q.pop();
                vis[node]=1;
                for(auto &[v,w]: adj[node])
                {
                    mini=min(mini,w);
                    if(!vis[v])
                    {
                        q.push(v);
                    }
                }
            }
        }
        return mini;
    }
};