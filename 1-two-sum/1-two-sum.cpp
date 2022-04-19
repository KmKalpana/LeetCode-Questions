class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int sum=0;
        vector <int>arr;
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++)
        {
            int find=target-nums[i];
            if(mp.find(find)!=mp.end())
            {
                arr.push_back(i);
                arr.push_back(mp[find]);
            }
            mp[nums[i]]=i;
        }
      return arr;
        
    }
};