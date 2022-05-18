class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
              vector<vector<int>>graph(n);
              vector<int>indegree(n+1,0);
            for(int i=0; i<edges.size(); i++)
            {
                graph[edges[i][0]].push_back(edges[i][1]);
                indegree[edges[i][1]]++;
            }
              queue<int>q;
             for(int i=0; i<n; i++)
             {
                 if(indegree[i]==0)
                 {
                     q.push(i);
                 }
             }
           vector<set<int>>v(n);
          while(!q.empty())
          {
              int node=q.front();
              q.pop();
              for(auto it: graph[node])
              {
                  --indegree[it];
                  v[it].insert(node);
                  v[it].insert(v[node].begin(),v[node].end());
                  if(indegree[it]==0)
                  {
                      q.push(it);
                  }
                  /*for(auto j: v[node])
                  {
                      v[it].insert(j);
                  }*/
              }
          }
        vector<vector<int>>ans(n);
        for(int i=0; i<n; i++)
        {
            for(auto it: v[i])
            {
                ans[i].push_back(it);
            }
        }
        return ans;
    }
};