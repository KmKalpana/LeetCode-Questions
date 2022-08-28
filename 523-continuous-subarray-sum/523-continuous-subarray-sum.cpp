class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
         int psum=nums[0];
        bool check;
        unordered_map<int,int>mp;
        mp[nums[0]%k]=0;
        for(int i=1; i<nums.size(); i++)
        {
            psum+=nums[i];
            cout<<psum%k<<" ";
            if(psum%k==0)
                return true;
            if(mp.find(psum%k)!=mp.end())
            {
                if(i-mp[psum%k]>1)
                return true;
            }
           else
            mp[psum%k]=i;
        }
        return false;
    }
};