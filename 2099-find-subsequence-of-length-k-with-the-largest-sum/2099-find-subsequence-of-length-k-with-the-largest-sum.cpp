class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> maxSubsequence(vector<int> &a, int k)
    {
        vector<int>ans;
         priority_queue<pi,vector<pi>, greater<pi> >pq; 
       for(int i=0; i<a.size(); i++)
       {
             pq.push({a[i],i});
           if(pq.size()>k)
           {
               pq.pop();
           }
           
       }
        map<int,int>mp;
        while(!pq.empty())
        {
            mp[pq.top().second]=pq.top().first;
            pq.pop();
        }
        for(auto it: mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};