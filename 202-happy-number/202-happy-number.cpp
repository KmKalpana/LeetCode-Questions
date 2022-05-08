class Solution {
public:
    bool isHappy(int n)
    {
        int r, sum ;
        unordered_map<int,int>mp;
          while(1)
          {
              int sum=0;
              int r=0;
              while(n>0)
              {
                 r=n%10;
                 sum+=(r*r);
                  n/=10;
              }
              if(mp[sum]>0)
              {
                  return false;
              }
                 mp[sum]++;
              if(sum==1)
              {
              return true;
              }
              n=sum;
          }
        return false;
}
};