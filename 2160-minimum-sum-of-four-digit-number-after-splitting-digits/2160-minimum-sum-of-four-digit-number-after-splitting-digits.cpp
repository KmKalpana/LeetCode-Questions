class Solution {
public:
    int minimumSum(int num) 
    {
        vector<int>arr;
        while(num>0)
        {
          int rem=num%10;
          arr.push_back(rem);
            num=num/10;
        }
        sort(arr.begin(),arr.end());
        int num1=1;
        num1=arr[0]*10+arr[2]*1;
        int num2=1;
        num2=arr[1]*10+ arr[3]*1;
        return num1+num2;
    }
};