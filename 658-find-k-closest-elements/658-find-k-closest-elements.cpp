class Solution {
    typedef pair<int, int> pi;
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<int>ans;
        priority_queue<pair<int,int>> pq;
        for(auto it: arr)
        {
            pq.push({abs(it-x),it});
        }
        int n=arr.size();
        while(n!=k)
        {
            pq.pop();
            n--;
        }
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};