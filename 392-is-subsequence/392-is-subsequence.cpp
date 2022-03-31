class Solution {
public:
   bool sequence(string &s, string &t, int m, int n)
   {
       if(m==0)
           return true;
       if(n==0)
           return false;
       if(s[m-1]==t[n-1])
       {
           return sequence(s,t,m-1,n-1);
       }
       return sequence(s,t,m,n-1);
   }
    bool isSubsequence(string s, string t)
    {
        if(s.size()==0 && t.size()>0 || s.size()==0 && t.size()==0)
            return true;
     return sequence(s,t,s.size(), t.size());
    }
    
};