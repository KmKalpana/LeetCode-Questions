class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi=0;
        int mini=0;
        int res=0;
        for(int i=0; i<nums.size(); i++)
        {
            maxi=max(0,nums[i]+maxi);
            mini=min(0,nums[i]+mini);
            res=max({maxi,-mini,res});
        }
        return res;
    }
};