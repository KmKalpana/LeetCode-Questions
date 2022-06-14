class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
    int n=nums.size();
     unordered_map<int,int>mp;
        for(auto it: nums)
        {
            mp[it]++;
        }
        int maxi=0, ans=0;
        for(auto it: mp)
        {
            if(it.second>=n/2 && maxi<it.second)
            {
                ans=it.first;
                maxi=it.second;
            }
        }
        return ans;
    }
};