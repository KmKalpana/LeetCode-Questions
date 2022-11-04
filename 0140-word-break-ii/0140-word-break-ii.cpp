class Solution {
public:
       vector<string>ans;
    void helper(int j, int n, string &s, set<string>&st,vector<string>&temp)
    {
        if(j==n)
        {
            string complete;
            for(auto i=0; i<temp.size()-1; i++)
            {
                complete+=temp[i];
                complete+=' ';
            }
            complete+=temp[temp.size()-1];
            ans.push_back(complete);
            return;
        }
        string t;
        for(int i=j; i<n; i++)
        {
              t+=s[i];
            //cout<<t<<" ";
            if(st.find(t)!=st.end())
            {
                cout<<t<<" ";
                temp.push_back(t);
                helper(i+1,n,s,st,temp);
                temp.pop_back();
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict)
    {
            set<string>st;
         for(auto it: wordDict)
            st.insert(it);
        vector<string>temp;
        helper(0,s.size(),s,st,temp);
         return ans;
    }
};