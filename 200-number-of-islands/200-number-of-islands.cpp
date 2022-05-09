class Solution {
public:
    bool isValid(vector<vector<char>>& grid, int m, int n, int i, int j)
    {
        if(i>=0 && i<m && j>=0 && j<n && grid[i][j]=='1')
            return true;
        return false;
    }
    void helper(vector<vector<char>>& grid, int m, int n, int i, int j)
    {
        grid[i][j]='0';
        if(isValid(grid,m,n,i-1,j))
        {
            helper(grid,m,n,i-1,j);
        }
        if(isValid(grid,m,n,i+1,j))
        {
            helper(grid,m,n,i+1,j);
        }
        if(isValid(grid,m,n,i,j+1))
        {
            helper(grid,m,n,i,j+1);
        }
        if(isValid(grid,m,n,i,j-1))
        {
            helper(grid,m,n,i,j-1);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
      //dfs
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                 helper(grid,m,n,i,j);
                }
             }
        }
        return ans;
    }
};