//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	 int findPar(int a, vector<int>&parent)
      {
          if(parent[a]==a)
            return a;
           return parent[a]=findPar(parent[a],parent);
      }
       void unionBySize(int u, int v, vector<int> &size,vector<int> &parent)
       {
           int par_u=findPar(u,parent);
           int par_v=findPar(v,parent);
           if(par_u==par_v)
             return ;
           if(size[par_u]<size[par_v]){
               size[par_v]+=size[par_u];
               parent[par_u]=par_v;
           }
           else if(size[par_v]<size[par_u]){
               size[par_u]+=size[par_v];
               parent[par_v]=par_u;
           }
           else{
               size[par_v]+=size[par_u];
               parent[par_v]=par_u;
           }
       }
    int spanningTree(int V, vector<vector<int>> adj[])
    {
    //     int sum=0;
    //     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    //     vector<int>vis(V,0);
    //     pq.push({0,0});
    //     while(!pq.empty())
    //     {
    //         int wt=pq.top().first;
    //         int node=pq.top().second;
    //         pq.pop();
    //         if(vis[node]==1) continue;
    //       vis[node]=1;
    //       sum+=wt;
    //       for(auto it: adj[node])
    //       {
    //           int adjNode=it[0];
    //           int edgwt=it[1];
    //           if(!vis[adjNode])  
    //           pq.push({edgwt,adjNode});
                
    //       }
    //     }
    //     return sum;
     
       vector<pair<int,pair<int,int>>> edges;
       for(int i=0; i<V; i++){
           for(auto it: adj[i]){
               edges.push_back({it[1],{i,it[0]}});
           }
       }
       vector<int>parent(V), size(V,0);
       for(int i=0; i<V; i++) 
       {
           parent[i]=i;
       }
      sort(edges.begin(),edges.end());
      int mstwt=0;
       for(auto it: edges){
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;
            if(findPar(u,parent)!=findPar(v,parent)){
                mstwt+=wt;
                unionBySize(u,v,size,parent);
            }
       }
       return mstwt;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends