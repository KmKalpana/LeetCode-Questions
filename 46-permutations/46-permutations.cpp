class Solution {
public:
     void helper(vector<int>&nums,vector<vector<int>>&res,int index,vector<int>v)
     {
         if(index>=nums.size())
         {
             res.push_back(v);
             return;
         }
         if(index==0)
         {
         for(auto i: nums)
         {
             v.push_back(i);
         }
         }
         for(int j=index; j<nums.size(); j++)
         {
             swap(v[index],v[j]);
             helper(nums,res,index+1,v);
         }
     }
    vector<vector<int>> permute(vector<int>& nums) 
    {
      vector<vector<int>>res;
        int n=nums.size();
        vector<int>v;
        helper(nums,res,0,v);
        return res;
    }
};