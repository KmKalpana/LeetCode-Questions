class Solution {
public:
    int dfs(int index,vector<vector<int>>&stones, vector<int>&vis)
    {
        vis[index]=1;
        int res=0;
        for(int i=0; i<stones.size(); i++)
        {
            if(!vis[i] && (stones[i][0]==stones[index][0] || stones[i][1]==stones[index][1]))
                res+=(dfs(i,stones,vis)+1);
        }
        return res;
    }
    int removeStones(vector<vector<int>>& stones)
    {
      int n=stones.size();
      int res=0;
      vector<int>vis(n,0);
        for(int i=0; i<n; i++)
        {
          if(!vis[i])
              res+=dfs(i,stones,vis);
        }
        return res;
    }
};