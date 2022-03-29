class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int strt=0, end=nums.size()-1;
        while(strt<=end)
        {
            int mid=(end-strt)/2+strt;
            if(nums[mid]==target)
                return true;
             if(nums[strt]==nums[mid] && nums[end]==nums[mid])
                 strt++,end--;
            else if(nums[strt]<=nums[mid])
            {
                if(nums[strt]<=target &&  nums[mid]>target)
                {
                    end=mid-1;
                }
                else
                    strt=mid+1;
            }
            else 
            {
                if(nums[mid]<target && nums[end]>=target)
                {
                    strt=mid+1;
                }
                else
                    end=mid-1;
            }
             
        }
        return false;
    }
};