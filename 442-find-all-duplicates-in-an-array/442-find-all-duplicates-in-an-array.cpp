class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
       unordered_map<int,int>mp;
         vector<int>v;
     for(int i=0; i<nums.size(); i++)
     {
        mp[nums[i]]++;
     }
        for(auto it: mp)
        {
            if(it.second==2)
            {
                v.push_back(it.first);
            }
        }
        return v;
    }
};