class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
      int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
       for(int i=0; i<n-2; i++)
       {
           int j=i+1;
           int k=n-1;
           int sum=0;
           while(j<k)
           {
           sum=nums[i]+nums[j]+nums[k];
               if(abs(ans-target)>abs(sum-target))
               {
                   ans=sum;
               }
               if(sum==target)
                   break;
               if(sum<=target)
               {
                   j++;
               }
               else
               k--;
           }
           
       }
        return ans;
    }
};