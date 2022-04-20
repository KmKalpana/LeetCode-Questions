class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
      vector<vector<int>> v(n,vector<int>(n));
        int val=0;
        int i=0;
        int r1=0, r2=n-1;
        int c1=0, c2=n-1;
      while(r1<=r2 && c1<=c2)
      {
          for(int c=c1; c<=c2; c++)
          {
              v[r1][c] = ++val;
          }
          for(int r=r1+1; r<=r2; r++)
          {
              v[r][c2] = ++val;
          }
          
          for(int c=c2-1; c>=c1; c--)
          {
              v[r2][c] = ++val;
          }
          for(int r=r2-1; r>r1; r--)
          {
              v[r][c1]= ++val;
          }
          r1++;
          r2--;
          c1++;
          c2--;
      }
        return v;
    }
};