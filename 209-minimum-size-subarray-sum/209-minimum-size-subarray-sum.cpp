class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
     /*   int count;
        int mini=INT_MAX;
        if(nums.size()==1 && nums[0]<target || nums.size()==0)
        {
            return 0;
        }
        if(nums[nums.size()-1]==target || nums[nums.size()-1]>target)
            return 1;
      for(int i=0; i<nums.size()-1; i++)
      {
          int sum=nums[i];
          count=1;
          if(sum==target || sum>target)
              return 1;
          
          for(int j=i+1; j<nums.size(); j++)
          {
              if(sum+nums[j]<target)
              {
                  sum+=nums[j];
                  count++;
              }
              else if(sum+nums[j]>=target)
              {
                  sum+=nums[j];
                count++;
                  break;
              }
          }
            if(count==nums.size() && sum<target)
         {
             return 0;
         }
          if(count<mini && sum>=target)
          {
              mini=count;
              count=0;
          }   
       
      }
        return mini;
        */
        int psum=0;
        int l=0,r=0;
        int len=INT_MAX;
        while(r<nums.size())
        {
            psum+=nums[r++];
            while(target<=psum)
            {
                len=min(len,r-l);
                psum-=nums[l++];
            }
        }
        return len==INT_MAX?0:len;
    }
};