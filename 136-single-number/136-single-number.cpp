class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
      /*for(int i=0; i<nums.size()-1;i++)
      {
          if(nums[i]!=INT_MIN)
          {
          for(int j=0; j<nums.size()-i-1; j++)
          {
              if(nums[i]==nums[j] && i!=j)
              {
                  nums[i]=INT_MIN;
                  nums[j]=INT_MIN;
              }
          }
              }
      }*/
        if(nums.size()==1)
        {
            int  k=nums[0];
            return k;
        }
        sort(nums.begin(),nums.end());
        int k;
         int i=0;
        while(i<nums.size())
        {
            if(nums[i]!=nums[i+1])
            {
                k=nums[i];
                break;
            }
            i+=2;
        }
        
   return k;
    }
    
       /* int sum=0;
        for(auto &a: nums)
        {
            sum=sum^a;
        }
      return sum;
          }*/
};