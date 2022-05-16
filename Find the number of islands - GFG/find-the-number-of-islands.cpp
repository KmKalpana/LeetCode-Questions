// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void helper(int i, int j, int row, int col, vector<vector<char>>& grid)
    {
        if(i<0 || i>row-1 || j<0 || j>col-1 || grid[i][j]=='0')
         {
             return ;
         }
         grid[i][j]='0';
         helper(i-1,j,row,col,grid);
         helper(i-1,j-1,row,col,grid);
         helper(i-1,j+1,row,col,grid);
         helper(i,j-1,row,col,grid);
         helper(i,j+1,row,col,grid);
         helper(i+1,j,row,col,grid);
         helper(i+1,j-1,row,col,grid);
         helper(i+1,j+1,row,col,grid);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
      int row=grid.size();
      int col=grid[0].size();
      int ans=0;
      for(int i=0; i<row; i++)
      {
          for(int j=0; j<col; j++)
          {
              if(grid[i][j]=='1')
              {
                  ans++;
                  helper(i,j,row,col,grid);
              }
          }
      }
      return ans;
    }

};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends