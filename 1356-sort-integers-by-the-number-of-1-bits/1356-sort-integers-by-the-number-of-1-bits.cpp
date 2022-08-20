class Solution {
public:
static bool comp(int a, int b)
{
    int x=a;
    int y=b;
    int counta=0;
    while(a>0)
    {
        a=a&(a-1);
        counta++;
    }
    int countb=0;
    while(b>0)
    {
        b=b&(b-1);
        countb++;
    }
    return counta==countb? x<y: counta<countb;
}
    vector<int> sortByBits(vector<int>& arr) 
    {
     sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};