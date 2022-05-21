class Solution {
public:
    int climbStairs(int n)
    {
      /* if(n==0)
           return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int s1=climbStairs(n-1);
        int s2=climbStairs(n-2);
        return s1+s2;
        */
        if(n==0)
           return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3; i<=n; i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};