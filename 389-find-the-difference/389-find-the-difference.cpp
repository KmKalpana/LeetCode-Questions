class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        char c=0;
        unordered_map<char,int>mp;
        for(auto it : s)
        {
            mp[it]++;
        }
        for(int i=0; i<t.size(); i++)
        {
            if(mp[t[i]]==0)
            {
                return t[i];
            }
            else
                mp[t[i]]--;
        }
        /*for(auto it: s)
        {
           c^=it;
        }
        for(auto it: t)
        {
           c^=it;
        }
        
        return c;
        */
        return '\0';
    }
};