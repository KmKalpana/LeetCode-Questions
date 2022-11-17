class Solution {
public:
    int mod=1e9+7;
    int helper(int r, int c, int n, int m,vector<vector<int>>& grid, int k,int sum,vector<vector<vector<int>>>&dp)
    {
        if (r >= n || c >= m)
            return 0;
        if(r==n-1 and c==m-1)
        {
            sum+=grid[r][c];
            if(sum%k==0)
                return 1;
            return 0;
        }
        if(dp[r][c][sum%k]!=-1) return dp[r][c][sum%k]%mod;
        int right=0,down=0;
         right=helper(r,c+1,n,m,grid,k,sum+grid[r][c],dp);
         down= helper(r+1,c,n,m,grid,k,sum+grid[r][c],dp);
        return dp[r][c][sum%k]=(right%mod + down%mod)%mod;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) 
    {
       int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(m+1,vector<int>(k+1,-1)));
        return helper(0,0,n,m,grid,k,0,dp);
    }
};