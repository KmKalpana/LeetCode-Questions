class Solution {
public:
    void helper(vector<int>&nums,int start, int end, int target,vector<int>&ans)
    {
        if(start>end)
            return ;
        int mid=(end-start)/2+start;
        cout<<mid<<" ";
        if(target==nums[mid])
        {
            cout<<nums[mid]<<" ";
            int i=mid;
            while(i>=start)
            {
                if(nums[i]==target)
                    i--;
                else
                    break;
            }
            ans[0]= ++i;
            int j=mid;
              while(j<=end)
            {
                if(nums[j]==target)
                    j++;
                  else
                      break;
            }  
                ans[1]= --j;
            }
       else if(nums[mid]>target)
            helper(nums,start,mid-1,target,ans);
        else
            helper(nums,mid+1,end,target,ans);
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
       int n=nums.size();
        vector<int>ans(2,-1);
        helper(nums,0,n-1,target,ans);
        return ans;
    }
};