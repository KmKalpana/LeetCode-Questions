class Solution {
public:
    int find(vector<int>&uni_find,int i)
    {
        if(uni_find[i]==i)
            return i;
        return uni_find[i]=find(uni_find,uni_find[i]);
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts)
    {
        vector<int>uni_find(accounts.size(),0);
        unordered_map<string,int>mp;
        for(int i=0; i<accounts.size(); i++)
        {
            uni_find[i]=i;
            for(int j=1; j<accounts[i].size(); j++)
            {
                if(mp.find(accounts[i][j])!=mp.end())
                {
                  int root1=find(uni_find,i);
                  int root2=find(uni_find,mp[accounts[i][j]]); 
                  uni_find[root1]=root2;
                }
                else
                {
                 mp[accounts[i][j]]=uni_find[i];   
                }
            }
        }
        unordered_map<int,vector<string> >res;
        vector<vector<string>>ans;
        for(auto it: mp)
        {
          int ind=find(uni_find,it.second);
          res[ind].push_back(it.first);
        }
        for(auto it: res)
        {
            vector<string> email=it.second;
            sort(email.begin(),email.end());
            email.insert(email.begin(),accounts[it.first][0]);
            ans.push_back(email);
        }
        return ans;
    }
};