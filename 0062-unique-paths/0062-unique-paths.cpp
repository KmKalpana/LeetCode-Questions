class Solution {
public:
    //Recursion TC=2^M*N  sc=0((m-1)+(n-1))
    //Memoization TC=0(M*N)  sc=((m-1)+(n-1))+dp
    int solve(int m , int n, vector<vector<int>>&dp)
    {
        if(m==0 && n==0)
        {
            return 1;
        }
        if(m<0 || n<0)
        {
            return 0;
        }
        if(dp[m][n]!=-1)
        {
            return dp[m][n];
        }
        
        int up=solve(m-1,n,dp);
        int right=solve(m,n-1,dp);
        return dp[m][n]=up+right;
        }
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>>dp(m,vector<int>(n,0));
       // return solve(m-1,n-1,dp);
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0 and j==0)
                    dp[i][j]=1;
                else
                {
                int right=0,down=0;
                if(i>0) 
                 right=dp[i-1][j];
                if(j>0) 
                  down=dp[i][j-1];
               dp[i][j]=right+down; 
                }
            }
        }
        return dp[m-1][n-1];
    }
};