class Solution {
public:
    bool helper(vector<vector<int>> &grid ,int i, int j)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        {
            return false;
        }
        if(grid[i][j]==1)
            return true;
        
        grid[i][j]=1;
        
       // return helper(grid,i+1,j) and helper(grid,i-1,j+1) and helper(grid,i,j+1) and helper(grid,i,j-1);
             bool d1=helper(grid,i+1,j); 
               bool d2=helper(grid,i-1,j);
               bool d3=helper(grid,i,j+1);
               bool d4=helper(grid,i,j-1);
             return d1 && d2 && d3 && d4; 
    }
    int closedIsland(vector<vector<int>>& grid) 
    {
        int ans=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j]==0 )
                {
                    ans+=helper(grid,i,j)?1:0;
                }
            }
        }
        return ans;
    }
};