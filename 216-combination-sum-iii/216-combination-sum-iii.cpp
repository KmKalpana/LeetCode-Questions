class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>v,int start, int n,int k)
    {
        if(v.size()==k && n==0)
        {
                ans.push_back(v);
            return;
        }
        for(int i=start; i<=9; i++)
        {
            v.push_back(i);
            helper(ans,v,i+1,n-i,k);
            v.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(ans,v,1,n,k);
        return ans;
    }
};