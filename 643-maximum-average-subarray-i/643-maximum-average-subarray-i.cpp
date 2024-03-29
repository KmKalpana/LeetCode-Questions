class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
       int i=0, j=0;
        double maxi=INT_MIN;
        double sum=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                double avg=sum/k;
                maxi=max(avg,maxi);
                sum-=nums[i];
                i++,j++;
            }
        }
        return maxi;
    }
};