class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& arr) 
    {
     int n=arr.size(), m=arr[0].size();
      int l=0, h=n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            int maxi=0;
            for(int i=0; i<m; i++)
            {
                if(arr[mid][i]>arr[mid][maxi])
                    maxi=i;
            }
           if((mid==0 || arr[mid][maxi]>arr[mid-1][maxi]) && (mid==n-1 || arr[mid][maxi]>arr[mid+1][maxi]))
               return {mid,maxi};
            else if(arr[mid][maxi]<arr[mid+1][maxi])
                l=mid+1;
            else
                h=mid-1;
        }
        return {-1,-1};
    }
};