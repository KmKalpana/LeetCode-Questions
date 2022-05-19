class Solution {
public:
    bool check(int i, int j, int r, int c)
    {
        if(i<r && i>=0 && j<c && j>=0)
            return true;
        return false;
    }
    int helper(vector<vector<int>>& matrix, int r, int c, int i, int j,vector<vector<int>>&ans)
    {
                 if(check(i,j,r,c)==0)
                     return 0;
              if(ans[i][j]!=-1)
            return ans[i][j];
        int a, b,c1,d;
              a=b=c1=d=0;
              if(check(i-1,j,r,c) and matrix[i-1][j]>matrix[i][j])
              {
                a=helper(matrix,r,c,i-1,j,ans);
              }
                  if(check(i+1,j,r,c) and matrix[i+1][j]>matrix[i][j])
                {
                       b=helper(matrix,r,c,i+1,j,ans);
                }
                   if(check(i,j-1,r,c) and matrix[i][j-1]>matrix[i][j])
                {
                       c1=helper(matrix,r,c,i,j-1,ans);
                }
                   if(check(i,j+1,r,c) and matrix[i][j+1]>matrix[i][j])
                {
                       d=helper(matrix,r,c,i,j+1,ans);
                }
          ans[i][j]=1+max(d,max(c1,max(a,b)));
        return ans[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) 
    {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>>ans(r,vector<int>(c,-1));
        int maxi=1;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
              if(ans[i][j]==-1)
              {
                  maxi=max(maxi, helper(matrix,r,c,i,j,ans));
              }
            }
        }
        return maxi;
    }
};