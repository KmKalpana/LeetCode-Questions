class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for(auto it: nums)
            mp[it]++;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
          if(mp[i+1]==2)
          {
              ans.push_back(i+1);
              break;
          }
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[i+1]==0)
            {
              ans.push_back(i+1);
                break;
            }
        }
        return ans;
    }
};