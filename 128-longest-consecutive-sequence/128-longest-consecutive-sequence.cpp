class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
       unordered_set<int>st;
        int ans=INT_MIN;
      for(int i=0; i<nums.size(); i++)
      {
          st.insert(nums[i]);
      }
        int longestStreak=0;
        for(auto it: nums)
        {
            if(st.find(it-1)==st.end())
            {
                int currentNum=it;
                int currentStreak=0;
                while(st.find(it)!=st.end())
                {
                    it+=1;
                    currentStreak+=1;
                }
                longestStreak=max(longestStreak,currentStreak);
            }
        }
        return longestStreak;
    }
};