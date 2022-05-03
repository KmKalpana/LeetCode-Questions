class Solution {
public:
    int minimum(int a, int b)
    {
        return a<b ? a: b;
    }
    int findUnsortedSubarray(vector<int>& nums) 
    {
        if(nums.size()==1)
        {
            return 0;
        }
         vector<int>v;
        for(auto i: nums)
        {
            v.push_back(i);
        }
        sort(v.begin(),v.end());
         int start=nums.size();
        int end=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=v[i])
            {
                start=min(start,i);
                end=max(end,i);
            }
        }
        return start==nums.size()?0:end-start+1;
    }
};