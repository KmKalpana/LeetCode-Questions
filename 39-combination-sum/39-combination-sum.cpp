class Solution {
public:
    void helper(vector<int>&v,vector<vector<int>>&ans,int start, int target, vector<int>&c)
    {
        if(target<0 || start>=c.size())
        {
            return ;
        }
        if(target==0)
        {
            ans.push_back(v);
            return;
        }
                v.push_back(c[start]);
                helper(v,ans,start,target-c[start],c);
                v.pop_back();
               helper(v,ans,start+1,target,c);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
     vector<vector<int>>ans;
      vector<int>v;
       helper(v,ans,0,target,candidates);
        return ans;
    }
};