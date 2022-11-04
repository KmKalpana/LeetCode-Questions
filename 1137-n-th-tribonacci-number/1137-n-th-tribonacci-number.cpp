class Solution {
public:
    int dp[38]={0};
    int tribonacci(int n)
    {
        if(n==0)
            return 0;
          else if(n==1||n==2)
              return 1;
      else if(dp[n]!=0)
          return dp[n];
        else
        dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        
        return dp[n];
    }
};