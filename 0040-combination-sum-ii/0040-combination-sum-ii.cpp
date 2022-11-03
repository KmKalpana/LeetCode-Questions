class Solution {
    vector<vector<int>>ans;
public:
    void helper(vector<int>&nums, int start, int end, int target, vector<int>&temp)
    {
        if(target==0)
        {
            cout<<1<<" ";
            ans.push_back(temp);
            return;
        }
        if(start>=end || target-nums[start]<0)
            return; 
        int num=nums[start];
       // cout<<num<<" ";
        temp.push_back(num);
        helper(nums,start+1,end,target-num,temp);
        temp.pop_back();   
        while(start<end && nums[start]==num) ++start ;
        helper(nums,start,end,target,temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
         int n=candidates.size();
         vector<int>temp;
         sort(candidates.begin(),candidates.end());
         helper(candidates,0,n,target,temp);
         return ans;
    }
};