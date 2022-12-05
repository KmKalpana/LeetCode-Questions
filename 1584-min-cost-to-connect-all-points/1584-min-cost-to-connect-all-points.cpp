class Solution {
public:
    //Time Complexit= (n^2 * logn)
    int minCostConnectPoints(vector<vector<int>>& points)
    {
       int res=0, i=0, loop=1, n=points.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;  //mean heap
       // priority_queue<pair<int,int>>pq;  //max heap
        
        vector<int>vis(n,0);
        while(loop++<n)
        {
            vis[i]=1;
            for(int j=0; j<n; j++)
            {
                if(!vis[j])
                {
                    pq.push({(abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1])),j});
                }
            }
            while(vis[pq.top().second])
              pq.pop();
             res+=pq.top().first;    //min heap
           //  res-=pq.top().first;    //max heap
            i=pq.top().second;
           pq.pop();
        }
       return res;             
    }
};