//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination) 
    {
         int n=grid.size();
         int m=grid[0].size();
            if (source.first == destination.first &&
            source.second == destination.second)
            return 0;
         vector<vector<int>> directions = { {0,1},{1,0},{0,-1},{-1,0}};
         vector<vector<int>> dist(n, vector<int>(m, 1e9));
         queue<pair<int,pair<int,int>>> q;
         dist[source.first][source.second] = 0;
        q.push({0, {source.first, source.second}});
      
       while(!q.empty())
       {
           auto curr=q.front();
           int dst=curr.first;
           int x=curr.second.first;
           int y=curr.second.second;
           for(auto it: directions)
           {
               int nx=it[0]+x;
               int ny=it[1]+y;
              
               if(nx<n && ny<m && nx>=0 && ny>=0 && grid[nx][ny]==1 && dist[nx][ny]>dst+1)
               {
                    if(nx== destination.first && ny==destination.second)
                       return dst+1;
                    dist[nx][ny]=dst+1;
                   q.push({1+dst,{nx,ny}});
               }
              
           }
             q.pop();
       }
       return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends