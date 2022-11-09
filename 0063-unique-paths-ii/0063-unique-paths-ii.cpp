class Solution {
public:

  int helper(vector<vector<int>>& obstacleGrid, int i, int j, vector<vector<int>> &dp)
    {
       if(i==0 and j==0)
           return 1;
      if(i<0 || j<0 )
          return 0;
      if(obstacleGrid[i][j]==1)
          return 0;
      if(dp[i][j]!=-1) return dp[i][j];
      return dp[i][j]=helper(obstacleGrid,i-1,j,dp)+helper(obstacleGrid,i,j-1,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
    {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
           if(obstacleGrid[0][0]==1 || obstacleGrid[n-1][m-1]==1)
               return 0;
     //   vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
     //  return helper(obstacleGrid,n-1,m-1,dp);
         vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(obstacleGrid[i][j]==1) continue;
                 if(i==0 and j==0)
                    dp[i][j]=1; 
                else
                {
                    int left=0,up=0;
                    if(i>0) up=dp[i-1][j];
                    if(j>0) left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        }
        cout<<dp[n-1][m-1];
        return dp[n-1][m-1];
    }
};