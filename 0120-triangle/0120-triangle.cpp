class Solution {
public:
    int helper(vector<vector<int>>& triangle,int row,int col, int n,vector<vector<int>>&dp)
    {
          if(row==n)
              return 0;
        if(dp[row][col]!=-1)
            return dp[row][col];
        int ind1=triangle[row][col]+helper(triangle,row+1,col,n,dp);
        int ind2=triangle[row][col]+helper(triangle,row+1,col+1,n,dp);
        return dp[row][col]=min(ind1,ind2);
    }
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int n=triangle.size();
    //   vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
      //  return helper(triangle,0,0,n,dp);
        vector<vector<int>> dp(n,vector<int>(n,0)) ;
       for(int i=0; i<n; i++)
       {
           dp[n-1][i]=triangle[n-1][i];
       }
        for(int i=n-2; i>=0; i--)
        {
            for(int j=i; j>=0; j--)
            {
                  int left=1e5,up=1e5;
                  left=dp[i+1][j+1]+triangle[i][j];
                  up= dp[i+1][j]+triangle[i][j]; 
                dp[i][j]=min(left,up);
            }
        }
        return dp[0][0];
    }
};