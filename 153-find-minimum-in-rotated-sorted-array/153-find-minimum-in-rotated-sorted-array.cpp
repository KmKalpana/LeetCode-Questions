class Solution {
public:
    int findMin(vector<int>& arr)
    {
       int min=30327402;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        return min;
    }
};