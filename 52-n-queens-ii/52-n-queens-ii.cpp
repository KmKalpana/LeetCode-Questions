class Solution {
public:
     bool isValid(int row, int col, vector<vector<bool>>&board, int n) {
   int x = row;
      int y= col;

      while (row >= 0 && col >= 0) {
        if (board[row][col])
          return false;
        row--;
        col--;
      }

      col = y;
      row = x;
      while (col >= 0) {
        if (board[row][col])
          return false;
        col--;
      }

      row = x;
      col = y;
      while (row < n && col >= 0) {
        if (board[row][col])
          return false;
        row++;
        col--;
      }
      return true;
    }
void solve(int col,vector<vector<bool>>&board,int &ans, int n) {
      if (col == n) {
         ans++;
        return;
      }
      for (int row = 0; row < n; row++) {
        if (isValid(row, col, board, n)) {
          board[row][col] = true;
          solve(col + 1, board, ans, n);
          board[row][col] = false;
        }
      }
    }
    int totalNQueens(int n) {
    int ans=0;
      	vector<vector<bool>> board(n, vector<bool>(n, false));
      solve(0, board, ans, n);
      return ans;
    }
};