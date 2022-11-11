class Solution {
public:
    int getSum(int a, int b)
    {
       if(b==0)
           return a;
        int x=a^b;
        int cr=(unsigned int)(a&b)<<1;
       return getSum(x,cr);
    }
};