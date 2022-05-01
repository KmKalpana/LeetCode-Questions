class Solution {
public:
    void helper(vector<vector<int>>&rooms,int node, int target, vector<int>&vis)
    {
        for(auto it: rooms[node])
        {
          if(vis[it]==0)
          {
              vis[it]=1;
              helper(rooms,it,target,vis);
          }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
      int n=rooms.size()-1;
      vector<int>vis(n+1,0);
        vis[0]=true;
        helper(rooms,0,n,vis);
        for(int i=0; i<vis.size(); i++)
        {
            if(vis[i]==0)
            {
                return 0;
            }
        }
        return 1;
    }
};