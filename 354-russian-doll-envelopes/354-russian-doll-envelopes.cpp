class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes)
    {
        /*for(int i=0; i<envelopes.size(); i++)
        {
            for(int j=0; j<i; j++)
               if(envelopes[i][0]>envelopes[j][0] && envelopes[i][1]>envelopes[j][1])
                   if(dp[i]<1+dp[j])
                       dp[i]=1+dp[j];
            if(max<dp[i])
                max=dp[i];
        }
        return max;*/
       sort(envelopes.begin(),envelopes.end(),[](vector<int>&a,vector<int>&b)
            {
            if(a[0]==b[0])
                return a[1]>b[1];
                return a[0]<b[0];
            });
     vector<int>dp;
        for(auto it: envelopes)
        {
            auto temp=lower_bound(dp.begin(),dp.end(),it[1]);
            if(temp!=dp.end())
               *temp=it[1];
            else
                dp.push_back(it[1]);
        }
        return dp.size();
    }
};