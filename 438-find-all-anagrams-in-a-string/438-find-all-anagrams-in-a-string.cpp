class Solution {
public:
   
    vector<int> findAnagrams(string s, string p) 
    {
    
      vector<char>mp(26,0),window(26,0);
      int n=s.size();
      int m=p.size();
        if(n<m)
            return {};
      for(int i=0; i<m; i++)
      {
          window[p[i]-'a']++;
          mp[s[i]-'a']++;
      }
         vector<int>ans;
        if(window==mp)
            ans.push_back(0);
       
      for(int i=m; i<n; i++)
      {
          mp[s[i-m]-'a']--;
           mp[s[i]-'a']++;
          if(window==mp)
              ans.push_back(i-m+1);
      }
        return ans;
    }
};