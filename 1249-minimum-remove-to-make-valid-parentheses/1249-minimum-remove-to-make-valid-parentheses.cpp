class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        string ans="";   
        int n=s.size();
        stack<int>stack;
         for(int i=0; i<n; i++)
        {
          if(s[i]=='(')
          {
              stack.push(i);
          }
        else if(s[i]==')')
        {
            if(!stack.empty())
                stack.pop();
            else
                s[i]='$';
        }
      }
        while(!stack.empty())
        {
           s[stack.top()]='$';
            stack.pop();
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]!='$')
                ans+=s[i];
        }
        return ans;
    }
};