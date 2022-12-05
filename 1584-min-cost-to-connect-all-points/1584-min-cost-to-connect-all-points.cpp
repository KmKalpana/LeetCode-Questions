class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points)
    {
       int res=0, i=0, loop=1, n=points.size();
        priority_queue<pair<int,int>>pq;  
        vector<int>vis(n,0);
        while(loop++<n)
        {
            vis[i]=1;
            for(int j=0; j<n; j++)
            {
                if(!vis[j])
                {
                    pq.push({-(abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1])),j});
                }
            }
            while(vis[pq.top().second])
              pq.pop();
           res-=pq.top().first;
            i=pq.top().second;
           pq.pop();
        }
       return res;             
    }
};