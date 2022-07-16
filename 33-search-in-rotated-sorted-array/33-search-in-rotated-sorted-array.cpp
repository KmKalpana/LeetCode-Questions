class Solution {
public:
   int helper(vector<int>&arr , int start, int last, int key)
{
    if(start>last)
    {
        return -1;
    }
    int mid=(start+last)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
     if(arr[start]<=arr[mid])
     {
         if(arr[start]<=key && arr[mid]>=key)
         {
             return helper(arr,start, mid-1, key);
         }
         else
         {
             return helper(arr, mid+1, last, key);
         }
     }
    else
    {
        if(arr[last]>=key && arr[mid]<=key)
        {
            return helper(arr, mid+1, last, key);
        }
        else
        {
            return helper(arr, start, mid-1, key);
        }
    }
}
    int search(vector<int>& nums, int target)
    {
        int start=0, end=nums.size()-1;
        return helper(nums,start, end, target);
      /*  while(start<=end)
        {
            int mid=(end+start)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
           else if(nums[start]<nums[mid])
           {
               if(nums[start]<=target && nums[mid]>target)
               { 
                   end=mid-1;
               }
               else 
                   start=mid+1;
           }
            else 
            {
            if(nums[end]>=target && nums[mid]<target)
             {
             start=mid+1;
             }
            else 
            {
                end=mid-1;
            }
        }
        }
        return -1;*/
    }
};