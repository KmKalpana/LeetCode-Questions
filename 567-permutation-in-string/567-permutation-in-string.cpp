class Solution {
    bool check( vector<int>&freqs1, vector<int>&freqs2)
    {
        for(int i=0; i<freqs1.size(); i++)
        {
            if(freqs1[i]!=freqs2[i])
                return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2)
    {
        vector<int>freqs1(26,0);
        for(char it: s1)
        {
            freqs1[it-'a']++;
        }
         int j=0, i=0;
        vector<int>freqs2(26,0);
        while(j<s2.size())
        {
           freqs2[s2[j]-'a']++;
              if(j-i+1<s1.size())
                  j++;
              else if(j-i+1==s1.size())
              {
              if(check(freqs1,freqs2))
              {
                  return true;
              }
                  freqs2[s2[i]-'a']--;
                  i++;
                  j++;
              }
          }
        return false;
    }
};