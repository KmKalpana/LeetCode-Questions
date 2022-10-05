class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        int b=0,i;
       for(i=0; i<nums.size() && i<=b; i++)
       {
          b=max(i+nums[i],b); 
       }
        return i==nums.size();
    }
};