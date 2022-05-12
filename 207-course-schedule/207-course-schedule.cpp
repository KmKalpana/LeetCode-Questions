class Solution {
public:
    bool isCycle(vector<int>adj[], int node, vector<int>&visited)
    {
          if(visited[node]==1)
              return true;
        if(visited[node]==0)
        {
            visited[node]=1;
         for(auto it: adj[node])
         {
             if(isCycle(adj,it,visited))
             {
                 return true;
             }
         }
        }
        visited[node]=2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
         int n=numCourses;
         vector<int>adj[n];
        for(auto it: prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }
        vector<int>visited(n,0);
        for(int i=0; i<n; i++)
        {
             if(isCycle(adj,i,visited))
             { 
                 return false;
             }
            
        }
        return true;
    }
};