// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	 vector<bool>visited(V+1,false);
	 queue<int>q;
	 int src=0;
	 visited[src]=true;
	 int level=0;
	 q.push(src);
	 while(!q.empty())
	 {
	     int size=q.size();
	     while(size--)
	     {
	      int u=q.front();
	      q.pop();
	      if(u==X)
	          {
	              return level;
	          }
	     for(auto v : adj[u])
	     {
	         if(visited[v]==false)
	         {
	             visited[v]=true;
	             q.push(v);
	         }
	     }
	     }
	     level++;
	 }
	 return -1;
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

  // } Driver Code Ends