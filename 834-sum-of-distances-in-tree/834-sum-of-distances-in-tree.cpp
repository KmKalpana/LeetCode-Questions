class Solution {
public:
    vector<vector<int>> graph;
    vector<int> count, res;
        
    void dfs(int node, int p = -1) {
        for(auto u : graph[node]) {
            if(u == p) continue;
            dfs(u, node);
            count[node] += count[u];
            res[node] += res[u] + count[u];
        }
    }

    void dfs2(int node, int n, int p = -1) {
        for(auto u : graph[node]) {
            if(u == p) continue;
            res[u] = res[node] - count[u] + n - count[u];
            dfs2(u, n, node);
        }
    }
    
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        graph.resize(n);
        for(int i = 0; i < n - 1; i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        res.resize(n);
        count.resize(n,1);
        dfs(0);
        dfs2(0, n);
        return res;
    }
   /*
   int solve(int src, vector<int>&dist, vector<vector<int>>&graph)
    {
        dist[src]=0;
        queue<int>q;
        q.push(src);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
                for(auto it: graph[node])
                {
                    if(dist[node]+1<dist[it])
                    {
                        dist[it]=dist[node]+1;
                            q.push(it);
                    }
                }
        }
        int sum=0;
        for(auto it: dist)
        {
            if(it!=INT_MAX)
             sum+=it;
        }
        return sum;
    }*/
   /* vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>graph(edges.size()+1);
        for(auto it: edges)
        {
            graph[it[0]].push_back(it[1]);
            graph[it[1]].push_back(it[0]);
        }
        vector<int>dp(n,0);
          for(int i=0; i<n; i++)
          {
              vector<int>dist(n+1,INT_MAX);
              dp[i]=solve(i,dist,graph);
          }
        return dp;
    }*/
};