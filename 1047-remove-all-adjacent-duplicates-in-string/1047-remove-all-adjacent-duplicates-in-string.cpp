class Solution {
public:
    string removeDuplicates(string s) 
    {
        int i=0; 
          vector<pair<char,int>>st;   
       for (auto c : s)
        {
            if(st.size()==0 || st.back().first!=c)
            {
                st.push_back({c,1});
            }
            else
            {
                st.back().second++;
            }
            if(st.back().second==2)
            {
                 st.pop_back();
            }
        }
        string res;
          for(auto it : st)
          {
              res.append(it.second,it.first);
          }
        return res;
    }
};