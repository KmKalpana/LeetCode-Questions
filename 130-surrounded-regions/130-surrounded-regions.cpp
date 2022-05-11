class Solution {
public:
    void solve(vector<vector<char>>& board) {
      int  n = board.size();
      int  m = board[0].size();
        if (n < 3 || m < 3) {
            return;
        }
        for (auto row = 0; row < n; ++row) {
            if (board[row][0] == 'O') {
                dfs(row, 0, board,m,n);
            }
            if (board[row][m - 1] == 'O') {
                dfs(row, m - 1, board,m,n);
            }
        }
        for (auto col = 1; col < m - 1; ++col) {
            if (board[0][col] == 'O') {
                dfs(0, col, board,m,n);
            }
            if (board[n - 1][col] == 'O') {
                dfs(n - 1, col, board,m,n);
            }
        }
        for (auto row = 0; row < n; ++row) {
            for (auto col = 0; col < m; ++col) {
                if (board[row][col] == 'O') {
                    board[row][col] = 'X';
                }
                else if (board[row][col] == 'R') {
                    board[row][col] = 'O';
                }
            }
        }
    }
    void dfs(int i, int j, vector<vector<char>>& board,int m, int n)
    {
        board[i][j]='R';
        if(i>0 && board[i-1][j]=='O' )
        {
             dfs(i-1,j,board,m,n);
        }
        if(i<n-1 && board[i+1][j]=='O')
        {
            dfs(i+1,j,board,m,n);
        }
        if( j>0 && board[i][j-1]=='O')
        {
             dfs(i,j-1,board,m,n);
        }
        if( j<m-1 && board[i][j+1]=='O')
        {
            dfs(i,j+1,board,m,n);
        }
    }
};