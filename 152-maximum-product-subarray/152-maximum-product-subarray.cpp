class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
       int maxi=nums[0];
       int mini=nums[0];
    int ans=nums[0];
       for(int i=1; i<nums.size(); i++)
       {
           int temp=maxi;
           maxi=max({nums[i],mini*nums[i],maxi*nums[i]});
           mini=min({nums[i],temp*nums[i],mini*nums[i]});
           ans=max(maxi,ans);
       }
        return ans;
    }
};