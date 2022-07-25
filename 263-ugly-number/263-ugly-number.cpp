class Solution {
public:
    bool isUgly(int nums)
    {
        if(nums<=0)
            return 0;
        vector<int>div={2,3,5};
        for(auto it: div)
        {
            while(nums%it==0)
                nums/=it;
        }
        return nums==1;
    }
};