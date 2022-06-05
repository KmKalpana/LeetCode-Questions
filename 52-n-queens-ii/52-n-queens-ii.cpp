class Solution {
public:
      bool isValid(int row, int col, vector<string>board, int n) {
   int x = row;
      int y= col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = y;
      row = x;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = x;
      col = y;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }
void solve(int col, vector < string > & board,int &ans, int n) {
      if (col == n) {
         ans++;
        return;
      }
      for (int row = 0; row < n; row++) {
        if (isValid(row, col, board, n)) {
          board[row][col] = 'Q';
          solve(col + 1, board, ans, n);
          board[row][col] = '.';
        }
      }
    }
    int totalNQueens(int n) {
    int ans=0;
      vector < string > board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
      solve(0, board, ans, n);
      return ans;
    }
};