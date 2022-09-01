 typedef pair<int,string>pi; 
class comparator{
    public:
    bool operator() (const pi &p1, const pi &p2)
        const
    {
        if(p1.first==p2.first)
            return p1.second > p2.second;
        return p1.first < p2.first;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        vector<string>res;
        unordered_map<string,int>mp;
        for(auto it: words)
        {
            mp[it]++;
        }
         //  sort(begin(words),end(words), [&](string a, string b){
           // return mp[a]==mp[b]?a>b:mp[a]>mp[b];
        // });
       priority_queue<pi,vector<pi>,comparator>pq;
         for (auto it : mp)
            pq.emplace(it.second, it.first);
        while(k-- && !pq.empty())
        {
            auto node=pq.top();
            cout<<node.first<<" "<<node.second<<endl;
            res.push_back(node.second);
            pq.pop();
        }
        return res;
    }
};