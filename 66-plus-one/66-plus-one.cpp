class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
         int sum=digits[n-1]+1;
         int rem=sum%10;
         digits[n-1]=rem;
        int carry=sum/10;
       for(int i=n-2; i>=0; i--)
       {
           int temp=digits[i];
           digits[i]=(digits[i]+carry)%10;
           carry=(temp+carry)/10;
       }
         vector<int>ans;
        if(carry>0)
        {
             ans.push_back(carry);
            for(auto it: digits)
                ans.push_back(it);
        }
        return carry==0?digits:ans;
    }
};