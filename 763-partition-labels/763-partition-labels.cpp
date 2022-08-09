class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
      vector<int>ans;
      unordered_map<char,int>mp;
        int n=s.size();
      for(int i=0; i<n; i++)
      {
        mp[s[i]]=i;   
      }
        int start=0;
        int end=0;
      for(int i=0; i<n; i++)
      {
         end=max(end,mp[s[i]]);
          if(i==end)
          {
              ans.push_back(end-start+1);
              start=i+1;
          }
      }
        return ans;
    }
};