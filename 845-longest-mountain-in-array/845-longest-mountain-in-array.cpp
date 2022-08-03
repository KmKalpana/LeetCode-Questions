#include <bits/stdc++.h>
class Solution {
public:
    int longestMountain(vector<int>& arr)
    {
        
        int n=arr.size();
        int i=1; 
        int maxi=0;
        while(i<n-1)
        {
          if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
          {
              int count=1;
              int j=i;
              while(j>0 && arr[j]>arr[j-1])
              {
                  count++;
                  j--;
              }
              while(i<n-1 && arr[i]>arr[i+1])
              {
                  i++;
                  count++;
              }
              maxi=max(maxi,count);
          }
            else
            {
                i++;
            }
        }
        return maxi;
    }
};