class Solution {
public:
    void helper(vector<vector<int>>&ans, vector<int>&v, int start,int num, int n, int k)
    {
        if(num==k)
        {
            ans.push_back(v);
            return;
        }
        for(int i=start; i<n; i++)
        {
            v.push_back(i+1); 
            helper(ans,v,i+1,num+1,n,k);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>>res;
        vector<int>v(0,k);
        helper(res,v,0,0,n,k);
        return res;
    }
};