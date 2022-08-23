class Solution {
public:
    int min(int a, int b)
    {
        return a<b?a:b;
    }
    int edgeScore(vector<int>& edges) 
    {
       int ans=0;
        unordered_map<long long ,vector<long long >>mp;
        long long total=INT_MIN;
        for(int i=0; i<edges.size(); i++)
        {
            mp[edges[i]].push_back(i);
        }
        for(auto it: mp)
        {
            long long sum=0;
            for(auto j : it.second)
            {
              sum+=j;   
            }
          // cout<<sum<<" ";
            if(total<=sum)
            {
               // cout<<it.first<<" ";
                if(total==sum)
                {
                 ans=min(ans,it.first);
                }
                else
                {
                 total=sum;
                ans=it.first;
                }
            }
        }
        return ans;
    }
};