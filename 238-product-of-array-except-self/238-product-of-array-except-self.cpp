class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
      int n=nums.size();
        int prod1=1, prod2=1;
        vector<int>ans(n,0);
        int counter=0;
     for(int i=0; i<n; i++)
     {
        if(nums[i]!=0 && counter==0)
        {
            prod1*=nums[i];
        }
         else
         {
             if(nums[i]==0 && counter==0)
             {
              prod2=prod1;
                prod1=0;
              counter=1;
             }
             else
             {
                 prod2*=nums[i];
             }
         }
     }
        for(int i=0; i<n; i++)
        {
            if(nums[i]!=0)
            {
              ans[i]=prod1/nums[i];
            }
            else
            {
                ans[i]=prod2;
            }
        }
        return ans;
    }
};