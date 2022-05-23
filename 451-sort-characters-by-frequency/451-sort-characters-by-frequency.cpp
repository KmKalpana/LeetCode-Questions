#include <bits/stdc++.h>
class Solution {
public:
    string frequencySort(string s)
    {
       unordered_map<char,int>mp;
       // priority_queue<char,greater<char>>pq;
        priority_queue<pair<int,char>>pq;
        for(auto it: s)
        {
            mp[it]++;
        }
        string ans="";
        for(auto it: mp)
        {
            pq.push({it.second,it.first});
        }
          while(pq.size())
          {
              auto temp=pq.top();
              pq.pop();
              ans+=string(temp.first,temp.second);
          }
        return ans;
    }
};