class Solution {
public:
    bool helper(vector<int>&arr, int n, int target, vector<vector<int>>&dp)
    {
        if(target==0)
            return true;
         if(n==0) return arr[0]==target;
        if(n<0 || target<0) return false;
        if(dp[n][target]!=-1)
            return dp[n][target];
        bool not_take=helper(arr,n-1,target,dp);
        bool take=false;
        if(arr[n]<=target)
            take=helper(arr,n-1,target-arr[n],dp);
       return dp[n][target]=not_take | take;
            
}
    bool canPartition(vector<int>& nums)
    {
      int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
        }
        if(sum%2!=0)
        {
          return false;
        }
        int n=nums.size();
       int x=sum/2;
       // vector<vector<bool>>dp(n+1,vector<bool>(x+1));
        vector<vector<int>>dp(n+1,vector<int>(x+1,-1));
         return helper(nums,n-1,x,dp);
        /*for(int i=0; i<=n; i++)
        {
            dp[i][0]=true;
        }
         for(int j=1; j<=x; j++)
         {
             dp[0][j]=false;
         }
        for(int i=1; i<=n; i++)
        {
           for(int j=1; j<=x; j++)
           {
               if(nums[i-1]<=j)
               {
                   dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
               }
               else
               {
                   dp[i][j]=dp[i-1][j];
               }
           }
        }
        */
      //  return dp[n][x];
    }
};