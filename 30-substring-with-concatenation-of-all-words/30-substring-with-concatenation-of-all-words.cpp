class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) 
    {
        unordered_map<string,int>mp;
        vector<int>ans;
        int n=words.size();
        for(auto it: words)
        {
            mp[it]++;
        }
        int m=words[0].size();
       for(int i=0; i<s.size()-n*m+1; i++)
       {
          unordered_map<string,int>temp;
           int j=0;
           for(; j<n; j++)
           {
              string word=s.substr(i+j*m, m);
               if(mp.find(word)!=mp.end())
               {
                   temp[word]++;
                   if(temp[word]>mp[word])
                       break;
               }
               else
                   break;
           }
           if(j==n)
               ans.push_back(i);
       }
        return ans;
    }
};