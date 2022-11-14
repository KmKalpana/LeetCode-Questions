class Solution {
public:
    int minSwaps(vector<int>& nums) 
    {
        int ans=INT_MAX;
        int n=nums.size(),j=0,i=0;
        int ones=count(nums.begin(),nums.end(),1);
        nums.insert(nums.end(),nums.begin(),nums.end());
        //cout<<nums.size();
        if(ones==0) return 0;
        int one=0;
       while(j<n*2)
       {
         one+=(nums[j]==0);
           if(j-i+1<ones)
               j++;
           else
           {
              ans=min(ans,one);
               if(nums[i]==0 and one>0)
                   one-=1;
               i++,j++;
           }
       }
        return ans;
    }
};