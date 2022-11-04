class Solution {
public:
    int minimumRounds(vector<int>& tasks)
    {
        unordered_map<int,int>mp;
        for(auto it: tasks)
            mp[it]++;
        int ans=0;
        for(auto it= mp.begin(); it!=mp.end(); it++)
        {
            if(it->second==1) return -1;
            else if(it->second%3==0)
                ans+=it->second/3;
            else
                ans+= it->second/3+1;
        }
        return ans;
    }
};