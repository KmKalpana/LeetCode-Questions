class Solution {
public:
    vector<vector<int>>v;
       void generate(vector<int>subset,int index,vector<int>nums)
    {
        if(index==nums.size())
        { 
           v.push_back(subset);
            return;
        }
          //exclude
           generate(subset,index+1,nums);
           int element=nums[index];
           subset.push_back(element);
           //include
           generate(subset,index+1,nums);
           subset.pop_back();
           
          
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int>subset;
        generate(subset,0,nums);
        return v;
    }
};