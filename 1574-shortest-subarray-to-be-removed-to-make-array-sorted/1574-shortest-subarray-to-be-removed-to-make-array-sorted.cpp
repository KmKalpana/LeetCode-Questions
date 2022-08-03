#include <bits/stdc++.h>
class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr)
    {
       int low=0;
       int high=arr.size()-1;
         int n =arr.size();
       while(low+1<n && arr[low]<=arr[low+1])
       {
           low++;
       }
        if(low==arr.size()-1)
            return 0;
      while(high> low && arr[high]>=arr[high-1])
       {
           high-- ;
       }
        int ans=min(n-low-1,high);
            int i = 0, j = high;
        
        while(i<=low and j<n)
        {
            if( arr[i] <= arr[j] )
            {
                ans=min(ans, j-i-1);
                i++;
            }
            else 
                j++;
        }
        return ans;
    }
};