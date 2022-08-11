class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust)
    {
        unordered_map<int,int>out,in;
       for(auto it: trust)
       {
          out[it[0]]++;
          in[it[1]]++;
       }
        for(int i=1; i<=n; i++)
        {
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
        return -1;
    }
};