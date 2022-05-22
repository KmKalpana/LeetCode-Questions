class Solution {
public:
    int helper(int i, int j, string &s)
    {
        if(i>=j)
            return 1;
        return s[i]==s[j]?helper(i+1,j-1,s):0;
    }
    int memoization(string &s)
    {
        vector<vector<int>>mem(s.size(),vector<int>(s.size()-1));
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=i; j<s.size(); j++)
            {
                ans+=helper(i,j,s);
            }
        }
        return ans;
    }
    int countSubstrings(string s) {
      return memoization(s);   
    }
};