class Solution {
public:
    bool isValid(vector<vector<int>>&grid, int i, int j, int m, int n)
    {
        if(i>=0 && i<n and j>=0 and j<m and grid[i][j]==1)
            return true;
            return false;
    }
    void helper(vector<vector<int>>&grid, int i, int j, int m, int n, int &temp)
    {
        grid[i][j]=0;
         temp++;
        if(isValid(grid,i+1,j,m,n))
        {
            helper(grid,i+1,j,m,n,temp);
        }
         if(isValid(grid,i-1,j,m,n))
        {
            helper(grid,i-1,j,m,n,temp);
        }
         if(isValid(grid,i,j+1,m,n))
        {
            helper(grid,i,j+1,m,n,temp);
        }
         if(isValid(grid,i,j-1,m,n))
        {
            helper(grid,i,j-1,m,n,temp);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
       int max=0;
       int n=grid.size();
       int m=grid[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    int temp=0;
                    helper(grid,i,j,m,n,temp);
                    if(max<temp)
                    {
                        max=temp;
                    }
                }
            }
        }
        return max;
    }
};