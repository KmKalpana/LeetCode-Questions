class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int,int>count;
        for(auto it: nums)
        {
          count[it]++;   
        }  
        sort(begin(nums),end(nums), [&](int a, int b){
            return count[a]==count[b]?a>b:count[a]<count[b];
        });
          return nums;
    }
};