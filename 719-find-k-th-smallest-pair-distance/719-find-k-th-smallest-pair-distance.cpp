class Solution {
public:
    bool isSmallestPairs(int mid, vector<int>&nums, int k)
    {
        int count=0,left=0;
        for(int right=1; right<nums.size(); right++)
        {
            while(nums[right]-nums[left]>mid)
                left++;
                count+=right-left;
        }
        return count>=k;
    }
    int smallestDistancePair(vector<int>& nums, int k) 
    {
       sort(nums.begin(),nums.end());
       int left=0, right=nums[nums.size()-1]-nums[0];
        while(left<right)
        {
            int mid=(left+right)/2;
            if(isSmallestPairs(mid,nums,k))
            {
                right=mid;
            }
            else
            {
                left=mid+1;
            }
        }
        return left;
    }
};