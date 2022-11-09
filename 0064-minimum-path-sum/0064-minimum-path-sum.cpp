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
   /*  int n=grid.size();
      int m=grid[0].size();
      int dp[n+1][m+1];
        for(int i=0; i<=n; i++)
        {
            dp[i][0]=INT_MAX;
        }
        for(int j=1; j<=m; j++)
        {
            dp[0][j]=INT_MAX;
        }
        dp[1][0]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i==1 && j==1)
            {
               dp[i][j]=dp[i][j-1]+grid[i-1][j-1];
            }
            else 
            {
                dp[i][j]=grid[i-1][j-1]+minimum(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
       return dp[n][m];
       */
         int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return helper(n-1,m-1,grid,dp);
    }
};