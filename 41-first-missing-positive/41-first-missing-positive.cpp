class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
     /* unordered_set<int>st;
        for(auto it: nums)
        {
            if(it>0)
                st.insert(it);
        }
        for(int i=1; i<=34233242434; i++)
        {
           if(st.find(i)==st.end())
               return i;
        }
        return -1;*/
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]>=1 && nums[i]<=n)
            {
               int chair=nums[i]-1;
                if(nums[chair]!=nums[i])
                {
                    swap(nums[chair],nums[i]);
                    i--;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(i+1!=nums[i])
                return i+1;
        }
        return n+1;
    }
};