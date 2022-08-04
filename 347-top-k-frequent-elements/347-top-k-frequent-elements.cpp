class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
      vector<int>res;
        unordered_map<int,int>mp;
       for(auto i: nums)
       {
           mp[i]++;
       }
       priority_queue<int,vector<int>,greater<int> >pq;
        for(auto it: mp)
        {
            pq.push(it.second);
            while(pq.size()>k)
            {
                pq.pop();
            }
        }
        for(auto it: mp)
        {
            if(it.second>=pq.top())
            {
                res.push_back(it.first);
                //pq.pop();
            }
        }
        return res;
    }
};