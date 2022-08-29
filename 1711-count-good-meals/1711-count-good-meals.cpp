class Solution {
public:
    int countPairs(vector<int>& a) 
    {
       unordered_map<int,int>mp;
        long long ans=0;
        long long mod=1e9+7;
        //left shift operator gives us power of 2.
       for(int i=0; i<a.size(); i++)
       {
           for(int j=1; j<=(1<<22); j*=2)
           {
               if(mp.count(j-a[i]))
                   ans+=mp[j-a[i]];
           }
           mp[a[i]]++ ;
       }
        return  int(ans % mod);
    }
};