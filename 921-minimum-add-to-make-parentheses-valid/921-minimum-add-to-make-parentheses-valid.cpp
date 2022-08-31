class Solution {
public:
    int minAddToMakeValid(string s) 
    {
      int mini=0;
      // stack<char>st;
        int check=0;
      for(auto it: s)
      {
          if(it=='(')
          {
              //st.push(it);
              check++;
          }
          else if(it==')' && check)
          {
         //  st.pop();
              check--;
          }
          else
              mini++;
      }
       // return mini+st.size();
        return mini+check;
    }
};