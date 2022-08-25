class Solution {
public:
    bool canConstruct(string r, string mz)
    {
       int n=r.size();
       int m=mz.size();
      if(r==mz)
      {
     return true;
      }
      if(n>m)
      {
        return false;  
      } 
        unordered_map<char,int>mp(26);
        for(auto x:mz)
        {
            mp[x]++;
        }
      for(int j=0; j<n; j++)
      {
        
           if(--mp[r[j]]<0)
          {
              return false;
          }
      }
        return true;
    }
};