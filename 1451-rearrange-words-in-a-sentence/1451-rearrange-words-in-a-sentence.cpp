class Solution {
public:
    string arrangeWords(string s)
    {
      map<int,vector<pair<int,string>>>mp;
        int n=s.size(),i=0;
        int counter=0;
        while(i<n)
        {
           string temp;
            while(i<s.size() && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
            if(temp.size())  mp[temp.size()].push_back({++counter,temp});
            if(s[i]==' ') i++;
        }
        string ans;
        int count=0;
        for(auto it: mp)
        {
            auto v=it.second;
            for(int i=0; i<v.size(); i++)
            {
                string t=v[i].second;
                if(count>0 && (t[0]>='A' && t[0]<='Z')) 
                    t[0]=tolower(t[0]);
                ans+=t;
                ans+=' ';
            }
            count++;
        }
        if(ans.size()) ans[0]=toupper(ans[0]);
        return ans.substr(0,ans.size()-1);
    }
};