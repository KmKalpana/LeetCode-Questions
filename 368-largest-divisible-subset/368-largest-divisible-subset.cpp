class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) 
    {
         sort(nums.begin(),nums.end());  
          int n=nums.size();
        int last_index=0;
        int ans=1;
        vector<int>dp(n,1), hash(n);
        for(int i=0; i<n; i++)
        {
            hash[i]=i;
            for(int prev=0; prev<i; prev++)
            {
                if(nums[i]%nums[prev]==0 and 1+dp[prev]>dp[i])
                {
                 dp[i]=1+dp[prev]; 
                    hash[i]=prev;
                 }
            }
             if(dp[i]>ans)
             {
                 ans=dp[i];
                 last_index=i;
             }
        }
        vector<int>temp;
        while(hash[last_index]!=last_index)
        {
             temp.push_back(nums[last_index]);
            last_index=hash[last_index];
        }
        temp.push_back(nums[last_index]);
        reverse(temp.begin(),temp.end());
        cout<<endl;
        for(int i=0; i<temp.size(); i++)
        {
            cout<<temp[i]<<" ";
        }
        return temp;
    }
};