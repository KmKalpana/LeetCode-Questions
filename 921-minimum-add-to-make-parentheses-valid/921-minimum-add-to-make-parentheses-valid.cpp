class Solution {
public:
    int minAddToMakeValid(string s) 
    {
      int mini=0;
       stack<char>st;
      for(auto it: s)
      {
          if(it=='(')
          {
              st.push(it);
          }
          else if(it==')' && !st.empty())
          {
           st.pop();

          }
          else
              mini++;
      }
        return mini+st.size();
    }
};