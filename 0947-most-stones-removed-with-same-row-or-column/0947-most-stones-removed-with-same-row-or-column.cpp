class Solution {
public:
    /*
      int removeStones(vector<vector<int>>& stones) {
        const int n = stones.size();
        vroot = vector<int>(n);
        for(int i=0;i<n;i++) vroot[i] = i;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])
                    connect(i,j);
            }
        }
        int cnt = 0;
        for(int i=0;i<n;i++) 
            if(vroot[i] == i) cnt++;
        return n - cnt;
    }
    
    int getRoot(int i){
        if(vroot[i] != i){
            vroot[i] = getRoot(vroot[i]);
        }
        return vroot[i];
    }
    
    void connect(int i, int j){
        vroot[getRoot(i)] = getRoot(j); 
    }
    
    vector<int> vroot;

    */
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