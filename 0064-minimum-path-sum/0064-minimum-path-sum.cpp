class Solution {
public:
    int minimum(int a, int b)
    {
        return a<b?a:b;
    }
    int helper(int i, int j, vector<vector<int>>& grid, vector<vector<int>>&dp)
	{
	    if(i<0 || j<0) return 1e5;
	    if(i==0 and j==0)
	    return grid[0][0];
	    
	    if(dp[i][j]!=-1) return dp[i][j];
	      int right=helper(i,j-1,grid,dp);
	      int down=helper(i-1,j,grid,dp);
	    return dp[i][j]=min(right,down)+grid[i][j];
	}
    int minPathSum(vector<vector<int>>& grid)
    {
        //  int n=grid.size();
        // int m=grid[0].size();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        // return helper(n-1,m-1,grid,dp);
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==0 && j==0)
            {
               dp[i][j]=grid[i][j];
            }
            else 
            {
                int up=INT_MAX, left=INT_MAX;
              if(i>0)  up=grid[i][j]+dp[i-1][j];
                if(j>0) left=grid[i][j]+dp[i][j-1];
                dp[i][j]=min(up,left);
            }
        }
    }
       return dp[n-1][m-1];
       
    }
};