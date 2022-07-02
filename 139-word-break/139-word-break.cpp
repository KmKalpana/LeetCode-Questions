class Solution {
public:
    bool helper(int j, string &s, set<string>&st, vector<int>&dp)
    {
        if(j==s.size())
        {
            return true;
        }
        if(dp[j]!=-1)
        {
            return dp[j];
        }
        string temp;
        for(int i=j; i<s.size(); i++)
        {
             temp+=s[i];
            if(st.find(temp)!=st.end() && helper(i+1,s,st,dp))
            {
                return dp[i]=1;
            }
        }
        return dp[j]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) 
    {
      set <string>st;
        vector<int>dp(s.size()+1,-1);
        for(auto it: wordDict)
        {
            st.insert(it);
        }
        return helper(0,s,st,dp);
    }
};