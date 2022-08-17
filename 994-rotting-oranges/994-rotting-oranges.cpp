class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
      int res=0;
      queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        int fcount=0, rcount=0;
      for(int i=0; i<grid.size(); i++)
      {
          for(int j=0; j<grid[i].size(); j++)
          {
              if(grid[i][j]==2)
              {
                  q.push({i,j});
                   ++rcount ;
              }
              if(grid[i][j]==1)
              {
                  ++fcount;
              }
          }
      }
      if(rcount==0 && fcount>0)
        {
            return -1;
        }
        while(!q.empty() && fcount>0)
        {
            int size=q.size();
            for(int i=0; i<size; i++)
            {
                int row=q.front().first;
                int col=q.front().second;
                q.pop();
                if(col+1<m && grid[row][col+1]==1)
                {
                    grid[row][col+1]=2;
                    q.push({row,col+1});
                    fcount--;
                }
                if(col-1>=0 && grid[row][col-1]==1)
                {
                    grid[row][col-1]=2;
                    q.push({row,col-1});
                    fcount--;
                }
                if(row-1>=0 && grid[row-1][col]==1)
                {
                    grid[row-1][col]=2;
                    q.push({row-1,col});
                    fcount--;
                }
                if(row+1<n && grid[row+1][col]==1)
                {
                    grid[row+1][col]=2;
                    q.push({row+1,col});
                    fcount--;
                }
            }
            res++;
             
        }
         return fcount==0?res:-1;
    }
};