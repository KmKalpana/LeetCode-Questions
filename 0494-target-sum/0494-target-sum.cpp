class Solution {
public:
//     int helper(int ind, int target, vector<int>&arr,vector<vector<int>>&dp)
//     {
//           if(ind == 0){
//             if(target==0 && arr[0]==0)
//                 return 2;
//             if(target==0 || target == arr[0])
//                 return 1;
//             return 0;
//     }
//         if(dp[ind][target]!=-1) 
//             return dp[ind][target];
//         int not_take=0+helper(ind-1,target,arr,dp);
//         int take=0;
//         if(target>=arr[ind])
//           take=helper(ind-1,target-arr[ind],arr,dp);
//         return dp[ind][target]=not_take+take;
             
//     }

//     int targetSum(int n,int target, vector<int>& arr){
//     int totSum = 0;
//     for(int i=0; i<arr.size();i++){
//         totSum += arr[i];
//     }
//     if(totSum-target<0) return 0;
//     if((totSum-target)%2==1) return 0;
    
//     int s2 = (totSum-target)/2;
    
//     vector<vector<int>> dp(n,vector<int>(s2+1,-1));
//         return helper(n-1,s2,arr,dp);
// }
    int findTargetSumWays(vector<int>& nums, int target) 
    {
      int n=nums.size(),totSum=0;
     // return targetSum(n,target,nums);
        for(auto it: nums) totSum+=it;
        if(totSum-target<0 or (totSum-target)%2==1)  return 0;
        int s2=(totSum-target)/2;
        vector<vector<int>>dp(n+1,vector<int>(s2+1,0));
         if(nums[0] == 0) dp[0][0] =2; 
          else dp[0][0] = 1;  
        if(nums[0]!=0 && nums[0]<=s2) dp[0][nums[0]] = 1; 
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<=s2; j++)
            {
                int not_taken=dp[i-1][j];
                int taken=0;
                if(nums[i]<=j)
                    taken = dp[i-1][j-nums[i]];
                 dp[i][j]= (not_taken + taken);
            }
        }
         return dp[n-1][s2];
    }
};