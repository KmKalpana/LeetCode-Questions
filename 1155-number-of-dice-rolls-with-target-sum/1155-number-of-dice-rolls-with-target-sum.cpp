class Solution {
public:
    int numRollsToTarget(int n, int k, int target, int res=0)
    {
             //if(n==0 || target<=0) return n==target;
           // for(int i=1; i<=k; i++)
             //   res=(res+numRollsToTarget(n-1,k,target-i,res))%(1000000000+7);
       // return res;
        vector<int>dp(target+1);
        dp[0]=1;
        for(int i=1; i<=n; i++)
        {
            vector<int>dp1(target+1);
            for(int j=1; j<=k; j++)
            {
                for(int k=j; k<=target; k++)
                {
                  dp1[k]=(dp1[k]+dp[k-j])%(1000000000+7);  
                }
            }
            swap(dp,dp1);
        }
        return dp[target];
    }
};