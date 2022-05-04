class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
       int op=0;
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            
            if(mp[k-nums[i]]>0)
            {
                op++;
              mp[k-nums[i]]-=1;
            }
            else
            {
                mp[nums[i]]+=1;
            }
        }
        return op;
    }
};