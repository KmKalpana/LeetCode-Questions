class Solution {
public:
    void dfs(int r, int c, int n, int m, vector<vector<char>>& board,vector<vector<int>>&vis)
    {
        //if(vis[r][c]==1)
         //   return ;
        if(r<0 || c<0 || r>=n || c>=m)
            return ;
        if(board[r][c]!='O')
            return ;
        //vis[r][c]=1;
        board[r][c]='R';
        dfs(r+1,c,n,m,board,vis);
        dfs(r-1,c,n,m,board,vis);
        dfs(r,c+1,n,m,board,vis);
        dfs(r,c-1,n,m,board,vis);
        //vis[r][c]=0;
        
    }
    void solve(vector<vector<char>>& board) 
    {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
      for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
               if(i==0 || j==0 || i==n-1 || j==m-1 )
               {
                   if(board[i][j]=='O')
                  dfs(i,j,n,m,board,vis);  
               }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
               if(board[i][j]=='O')
                   board[i][j]='X';
                if(board[i][j]=='R')
                    board[i][j]='O';
            }
        }
        
    }
};