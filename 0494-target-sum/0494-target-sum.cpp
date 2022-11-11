class Solution {
public:
    int helper(int ind, int target, vector<int>&arr,vector<vector<int>>&dp)
    {
          if(ind == 0){
            if(target==0 && arr[0]==0)
                return 2;
            if(target==0 || target == arr[0])
                return 1;
            return 0;
    }
        if(dp[ind][target]!=-1) 
            return dp[ind][target];
        int not_take=0+helper(ind-1,target,arr,dp);
        int take=0;
        if(target>=arr[ind])
          take=helper(ind-1,target-arr[ind],arr,dp);
        return dp[ind][target]=not_take+take;
             
    }

    int targetSum(int n,int target, vector<int>& arr){
    int totSum = 0;
    for(int i=0; i<arr.size();i++){
        totSum += arr[i];
    }
    if(totSum-target<0) return 0;
    if((totSum-target)%2==1) return 0;
    
    int s2 = (totSum-target)/2;
    
    vector<vector<int>> dp(n,vector<int>(s2+1,-1));
        return helper(n-1,s2,arr,dp);
}
    int findTargetSumWays(vector<int>& nums, int target) 
    {
      int n=nums.size();
     return targetSum(n,target,nums);
    }
};