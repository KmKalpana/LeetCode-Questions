class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
       int n=matrix.size(); 
        int m=matrix[0].size();
        int r=0, c=m-1;
       while(r>=0 && c>=0 && r<n && c<m)
       {
           if(target==matrix[r][c])
               return true;
            if(target>matrix[r][c])
               r++;
           else
               c--;
       }
        return false;
    }
};