class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        for(int i=k-1; i<nums.size(); i++)
        {
            mini=min(mini,nums[i]-nums[i-k+1]);
        }
        return mini;
    }
};