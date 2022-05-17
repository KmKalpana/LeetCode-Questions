class Solution {
public:
 
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
       vector<vector<pair<int,int>>> graph(n);
        for(auto edge : flights)graph[edge[0]].push_back({edge[1],edge[2]});
        
		//price is for storing the minimum price from source to ith node
		vector<int> prices(n,-1);
		
		//queue is for bfs traversal and we store first for node and second is for minimum cost
        queue<pair<int,int>> q;
        q.push({src,0});
        k++;
        while(!q.empty())
        {   if(!k)
            break;
            int len=q.size();
           while(len--)
            {
               auto node=q.front();
                q.pop();
                for(auto child:graph[node.first])
                {
                    int pr=child.second+node.second;
                   if(prices[child.first]==-1 ||prices[child.first]>pr)
                   {
                       prices[child.first]=pr;
                    q.push({child.first,pr});
                   }
                       
                    }
                
            }
         k--;
        }
       
        return prices[dst];
    }
      
};