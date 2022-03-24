class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int res=0;
        /* bruteforce Approach. 
         sort(nums.begin(),nums.end());
          int i;
        for(i=0; i<nums.size()-1; i++)
         {
           if(nums[i]==nums[i+1])
               return nums[i];
         }*/
        /* using hashmap
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
       for(int i=0; i<nums.size(); i++)
       {
           if(mp[nums[i]]>1)
           {
               return nums[i];
           }
       }*/
        //floyd algorithm;
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
      return slow;
    }
};