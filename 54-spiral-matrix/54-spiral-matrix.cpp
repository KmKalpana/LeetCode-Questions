class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
       int i=0, row=n-1;
       int j=0, col=m-1;
        vector<int>ans;
      while(i<=row && j<=col)
      {
          //Left to right.
          for(int k=j; k<=col; k++)
          {
              ans.push_back(matrix[i][k]);
          }
          i++;
          if(i>row)
              break;
          //up to down.
          for(int k=i; k<=row; k++)
          {
              ans.push_back(matrix[k][col]);
          }
          col--;
          if(j>col)
              break;
          //right to left.
          for(int k=col; k>=j; k--)
          {
              ans.push_back(matrix[row][k]);
          }
          row--;
          
          if(i>row)
              break;
          //down to up.
          for(int k=row; k>=i; k--)
          {
             ans.push_back(matrix[k][j]); 
          }
          j++;
          if(j>col)
              break;
         
      }
        return ans;
    }
};