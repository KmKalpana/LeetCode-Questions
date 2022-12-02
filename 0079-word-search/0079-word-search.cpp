class Solution {
public:
       bool dfs(int r, int c, vector<vector<char>>& board, vector<vector<int>>&vis,int ind, string word)
     {
           if(ind==word.size())
                return true;
         if(r<0|| c<0 || r>=board.size() || c>=board[0].size() || word[ind]!=board[r][c] || vis[r][c]==1)
           return false;
              board[r][c]='1';
         bool check= dfs(r+1,c,board,vis,ind+1,word) || dfs(r-1,c,board,vis,ind+1,word) || dfs(r,c+1,board,vis,ind+1,word) ||dfs(r,c-1,board,vis,ind+1,word);
           board[r][c]=word[ind];
           return check;
       }
   //   }
   //  bool dfs(int r, int c,string word, int i,vector<vector<char>>&board)
   //  {
   //      if(i==word.size())
   //          return true;
   //  if(r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] != word[i]) return false;
   //        board[r][c]='1';
   // bool check=dfs(r-1,c, word, i+1, board) || dfs(r+1,c, word, i+1, board) ||  dfs(r,c+1, word, i+1, board) ||  dfs(r,c-1, word, i+1, board);
   //   board[r][c]=word[i];
   //      return check;
   //  }
    bool exist(vector<vector<char>>& board, string word)
    {
       // int n=board.size();
       // int m=board[0].size();
       //  for(int i=0; i<n; i++)
       //      for(int j=0; j<m; j++) 
       //        if(board[i][j]==word[0] && dfs(i,j,word,0,board))
       //         return true;
       //  return false;
         int n=board.size(); 
        int m=board[0].size();
            vector<vector<int>>vis(n+1, vector<int>(m+1,0));
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(board[i][j]==word[0] and !vis[i][j])
                    {
                         if(dfs(i,j,board,vis,0,word))
                           return true;
                    }
                }
            }
            return false;
    }
};