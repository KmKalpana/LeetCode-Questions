class Solution {
public:
    void helper(vector<int>v, set<vector<int>>&ans, vector<int>&nums, int index)
    {
        if(index==v.size())
        {
            ans.insert(v);
        }
        for(int i=index; i<nums.size(); i++)
        {
            swap(v[index],v[i]);
            helper(v,ans,nums,index+1);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>res;
        vector<int>v;
        for(auto it: nums)
        {
            v.push_back(it);
        }
        helper(v,res,nums,0);
        vector<vector<int>>ans;
        for(auto it: res)
        {
            ans.push_back(it);
        }
        return ans;
    }
};