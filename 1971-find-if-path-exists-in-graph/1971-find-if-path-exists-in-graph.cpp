class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
      int dist[n+1];
        for(int i=0; i<n; i++)
        {
         dist[i]=10000000;
        }
        dist[source]=0;
        vector<int>graph[n];
        for(int i=0; i<edges.size(); i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int>q;
        q.push(source);
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
        return dist[destination]!=10000000? true:false;
    }
};