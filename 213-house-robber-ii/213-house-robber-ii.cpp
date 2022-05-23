class Solution {
public:
int maximumNonAdjacentSum(vector<int> &nums){
    vector<int>dp(nums.size()+1,0);
     //return helper(nums,nums.size()-1,dp);
    dp[0]=nums[0];
    for(int i=1; i<nums.size(); i++)
    { 
        int pic=nums[i];
        if(i>1)
        {
         pic+=dp[i-2];
        }
       int nonpic=0+dp[i-1];
        dp[i]=max(pic,nonpic);
    }
    return dp[nums.size()-1];
}
    int rob(vector<int>& valueInHouse) {
          int n=valueInHouse.size();
    vector<int>temp1, temp2;
    if(n==1)
        return valueInHouse[0];
    for(int i=0; i<n; i++)
    {
        if(i!=0)
            temp1.push_back(valueInHouse[i]);
        if(i!=n-1)
            temp2.push_back(valueInHouse[i]);
    }
    return max(maximumNonAdjacentSum(temp1),maximumNonAdjacentSum(temp2));
    }
};