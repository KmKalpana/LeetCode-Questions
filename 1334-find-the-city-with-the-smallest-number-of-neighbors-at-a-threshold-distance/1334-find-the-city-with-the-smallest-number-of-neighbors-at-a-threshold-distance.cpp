class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) 
    {
        vector<vector<int>> dist(n, vector(n, 10001));
               int small=n;
                 int ans=0;
        for(auto it : edges)
          {
            dist[it[0]][it[1]]=dist[it[1]][it[0]]=it[2];
          }
           for(int i=0; i<n; i++)
            {
            dist[i][i]=0;
            }
        
        for (int k = 0; k < n; ++k)
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < n; ++j)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
         for(int i=0; i<n; i++)
         {
             int count=0;
          for(int j=0; j<n; j++)
             {
             if(dist[i][j]<=distanceThreshold)
                ++count;
              }
            if(small>=count)
            {
                  ans=i; 
                small=count;
            }
         }
                 return ans;
    }
};