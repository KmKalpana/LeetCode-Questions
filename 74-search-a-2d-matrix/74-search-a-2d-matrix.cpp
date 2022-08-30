class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
       int n=matrix.size();
        int m=matrix[0].size();
      /*  for(int i=0; i<n; i++)
        {
           int j=0;
            int k=m-1;
            while(j<=k)
            {
                if(target==matrix[i][j] || target==matrix[i][k])
                    return true;
                if(target>matrix[i][j])
                {
                    j++;
                }
                 if(target<matrix[i][k])
                {
                    k--;
                }
            }
        }*/
        int row=0, col=m-1;
        while(row<n && col>=0)
        {
            int cur=matrix[row][col];
            if(target==cur)
                return true;
            else if(target>cur)
                row++;
            else
                col--;
        }
        return false;
    }
};