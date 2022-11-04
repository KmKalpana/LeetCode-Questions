class Solution {
public:
    vector<vector<string>>ans;
    bool palindrome(string st)
    {
        int n=st.size();
        for(int i=0; i<st.size()/2; i++)
        {
            if(st[i]!=st[n-i-1])
                return false;
        }
        return true;
    }
    void helper(int j, int n, string &s, vector<string>temp)
    {
        if(j==n)
        {
            ans.push_back(temp);
            return;
        }
        string t;
        for(int i=j; i<s.size(); i++)
        {
            t+=s[i];
            if(palindrome(t))
            {
                temp.push_back(t);
                helper(i+1,n,s,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
       vector<string>temp;
        int n=s.size();
        helper(0,n,s,temp);
       return ans;
    }
};