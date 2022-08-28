class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
      unordered_set<int>st;
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
        return -1;
    }
};