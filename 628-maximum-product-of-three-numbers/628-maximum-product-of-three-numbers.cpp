class Solution {
public:
    int maximumProduct(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int ans=1;
         int mini1=nums[0];
         int mini2=nums[1];
         int maxi1=nums[nums.size()-1];
         int maxi2=nums[nums.size()-2];
         int maxi3=nums[nums.size()-3];
          int ans1= mini1*mini2*maxi1;
          int ans2=maxi1*maxi2*maxi3;
        return ans1>ans2?ans1:ans2;
    }
};