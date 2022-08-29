class Solution {
public:
    string removeStars(string s) 
    {
       /*string st;
        int i=s.size()-1;
        int count=0;
       while(i>=0)
       {
          if(s[i]=='*')
          {
              while(s[i]=='*')
              {
                  count++;
                  i--;
              }
              while(i>=0 && count && s[i]!='*')
              {
                  i-- , count--;
              }
          }
           else
           {
               st+=s[i];
               i--;
           }
       }
        reverse(st.begin(),st.end());
        return st;
        */
         int j = 0;
       for (int i = 0; i < s.size(); ++i)
        if (s[i] == '*')
            j--;
        else 
            s[j++] = s[i];
       return s.substr(0, j);
    }
};