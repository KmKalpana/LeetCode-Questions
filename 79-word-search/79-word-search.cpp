class Solution {
public:
    bool dfs(int r, int c,string word, int i,vector<vector<char>>&board)
    {
        if(i==word.size())
            return true;
    if(r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] != word[i]) return false;
          board[r][c]='1';
   bool check=dfs(r-1,c, word, i+1, board) ||
              dfs(r+1,c, word, i+1, board) || 
              dfs(r,c+1, word, i+1, board) || 
              dfs(r,c-1, word, i+1, board);
          board[r][c]=word[i];
        return check;
    }
    bool exist(vector<vector<char>>& board, string word)
    {
       int n=board.size();
       int m=board[0].size();
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) 
              if(board[i][j]==word[0] && dfs(i,j,word,0,board))
               return true;
        return false;
    }
};