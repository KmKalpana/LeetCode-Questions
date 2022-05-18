class Solution {
public:
    void dfs(int node, int parent, vector<int>&vis, vector<int>&tin, vector<int>&low, int &timer, vector<int>adj[], vector<vector<int>>&ans)
    {
       vis[node]=1;
        tin[node]=low[node]=timer++;
        for(auto &it: adj[node])
        {
            if(it==parent)
                continue;
            if(!vis[it])
            {
                dfs(it, node, vis, tin,low, timer, adj,ans);
                low[node]=min(low[node],low[it]);
                if(low[it]>tin[node])
                {
                    ans.push_back({it,node});
                    cout<<it<<" "<<node<<endl;
                }
            }
            else
            {
                low[node]=min(low[node], tin[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) 
    {
      vector<int>adj[n];
        vector<vector<int>>ans;
        for(auto it: connections)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>tin(n,-1);
        vector<int>low(n,-1);
        vector<int>vis(n,0);
        int timer=0;
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                dfs(i,-1,vis,tin,low,timer,adj,ans);
            }
        }
        return ans;
    }
};

/*class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> graph;
    vector<int> id;
    vector<int> lowlink;
    vector<bool> vis;
    int time=0;
    void dfs(int node,int parent)
    {
        id[node]=lowlink[node]=time++;
        vis[node]=true;
        for(int &x:graph[node])
        {
            if(parent==x)continue;
            if(vis[x]==false)
            {
                dfs(x,node);
                lowlink[node]=min(lowlink[node],lowlink[x]);
                if(id[node]<lowlink[x])
                    ans.push_back({node,x});
            }
            else 
                lowlink[node]=min(lowlink[node],id[x]);
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        graph.resize(n);
        vis.resize(n,false);
        lowlink.resize(n,0);
        id.resize(n,0);
        for(auto &x:connections)
        {
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
                dfs(i,i);
        }
        return ans;
    }
};*/