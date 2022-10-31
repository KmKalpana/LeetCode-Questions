class Solution {
public:
      const int m = 1000000007;
   long long binaryexp(int a, long long b)
    {
        if(b==0)
            return 1;
        if(b==1)
            return a;
        long long res = binaryexp(a,b/2);
        if(b&1)
        {
            return ( ( ( res * res ) % m ) * a ) % m;
        }
        else
            return (res*res)%m;
    }
    int countGoodNumbers(long long n) 
    {
     return (int)(binaryexp(5,(n+1)/2)*binaryexp(4,(n/2))%m);
    }
    
};