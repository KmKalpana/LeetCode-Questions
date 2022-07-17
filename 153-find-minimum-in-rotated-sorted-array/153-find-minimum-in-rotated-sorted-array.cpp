class Solution {
public:
    int findMin(vector<int>& arr)
    {
        int left=0, right=arr.size()-1;
        while(left<right)
        {
            if(arr[left]<arr[right])
            {
                return arr[left];
            }
            int mid=(left+right)/2;
            if(arr[left]<=arr[mid])
            {
                left=mid+1;
            }
            else
            {
                right=mid;
            }
        }
        return arr[left];
    }
};