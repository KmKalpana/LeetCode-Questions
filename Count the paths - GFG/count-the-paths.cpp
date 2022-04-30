// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
void dfs(vector<vector<int>>edges,int node, int dest ,int &count,vector<int>&vis)
{
    if(node==dest)
    {
        count++;
        return ;
    }
    vis[node]=1;
    for(auto it: edges[node])
    {
        if(!vis[it])
        {
            dfs(edges,it,dest,count,vis);
        }
    }
    vis[node]=0;
}
	int possible_paths(vector<vector<int>>edges, int n, int s, int d)
	{
	    vector<vector<int>>adj(n,vector<int>());
	    for(auto it: edges)
	    {
	        adj[it[0]].push_back(it[1]);
	    }
	    int count=0;
	    vector<int>vis(n,0);
    	  dfs(adj,s,d,count,vis);
	  return count;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends