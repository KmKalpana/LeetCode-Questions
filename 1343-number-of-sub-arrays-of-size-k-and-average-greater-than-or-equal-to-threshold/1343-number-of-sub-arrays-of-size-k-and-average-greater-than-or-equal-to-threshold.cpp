class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold)
    {
      int ans=0;
      int i=0, j=0;
        double avg=0;
        int sum=0;
        while(j<arr.size())
        {
         sum+=arr[j];
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                avg=sum/k;
                if(avg>=threshold)
                    ans++;
                sum-=arr[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};