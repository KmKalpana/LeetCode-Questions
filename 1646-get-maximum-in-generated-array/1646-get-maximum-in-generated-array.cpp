class Solution {
public:
    int getMaximumGenerated(int n) 
    {
        vector<int>nums(1000);
        if(n==0)
            return 0;
        nums[0]=0;
        nums[1]=1;
        int maxi=nums[1];
        for(int i=2; i!=n+1; i++)
        {
            if(i%2==0)
            {
                nums[(i/2)*2]=nums[i/2];
                maxi=max(maxi,nums[(i/2)*2]);
            }
            else
            {
                nums[(i/2)*2+1]=nums[(i/2)]+nums[i/2+1];
                maxi=max(maxi,nums[(i/2)*2+1]);
            }
        }
        return maxi;
    }
};