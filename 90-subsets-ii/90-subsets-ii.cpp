class Solution {
public:
     vector<vector<int>>v ;
      void subsets(vector<int>&subset,vector<int>&nums,int i)
      {
          if(i>=nums.size())
          { 
              auto it=find(v.begin(),v.end(),subset);
              if(it!=v.end())
              {
                 return;
              }
              v.push_back(subset);
              return ;
          }
          vector<int>temp2;
          for(auto x:subset)
          {
              temp2.push_back(x);
          }
          temp2.push_back(nums[i]);
          subsets(temp2,nums,i+1);
          vector<int>temp1;
          for(auto x:subset)
          {
              temp1.push_back(x);
          }
          subsets(temp1,nums,i+1);
          
          return ;
      }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
      vector<int>subset;
      sort(nums.begin(),nums.end());
      subsets(subset,nums,0);
        return v;
    }
};