class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int dp[]=new int[cost.length+1];
        memset(dp);
     return solveMem(cost,cost.length,dp);   
    }
    void memset(int[]dp){
        for(int i=0;i<dp.length;i++)
            dp[i]=-1;
    }
    int solveMem(int[] arr,int n,int dp[]){

        if(n==0 || n==1)return 0;
        if(dp[n]!=-1)return dp[n];
        int oneStep=solveMem(arr,n-1,dp)+arr[n-1];
        int twoStep=solveMem(arr,n-2,dp)+arr[n-2];
        
        return dp[n]= Math.min(oneStep,twoStep);
    }
    
}