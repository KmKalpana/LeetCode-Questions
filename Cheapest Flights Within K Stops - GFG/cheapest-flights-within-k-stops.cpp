//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int k) 
    {
       vector<vector<pair<int,int>>> adj(n);
        for(auto it: flights)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        queue<pair<int,int>>pq;
        pq.push({src,0});
        vector<int>price(n,-1);
        while(!pq.empty()){
            int n=pq.size();
              if(k==-1)
                break;
            for(int i=0; i<n; i++)
            {
                int node=pq.front().first;
                int dist=pq.front().second; 
                //cout<<node<<" "<<dist<<endl;
                pq.pop();
                for(auto it: adj[node])
                {
                   if(price[it.first]==-1 or price[it.first]>it.second+dist)
                   {
                    price[it.first]=it.second+dist;
                    pq.push({it.first,dist+it.second});
                   }
                }
            }
             k=k-1;
        }
        return price[dst];
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        int edge; cin>>edge;
        vector<vector<int>> flights;
        
        for(int i=0; i<edge; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }
        
        int src,dst,k;
        cin>>src>>dst>>k;
        Solution obj;
        cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends