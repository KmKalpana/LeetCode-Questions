class Solution {
public:
    vector<string>ans;
   /* void genearte_parentheses(string &s, int open, int close)
    {
        if(open==0 && close==0)
        {
            ans.push_back(s);
        }
        if(open>0)
        {
            s.push_back('(');
            genearte_parentheses(s,open-1,close);
            s.pop_back();
        }
        if(close>0)
        {
            if(open<close)
            {
                s.push_back(')');
                genearte_parentheses(s,open,close-1);
                s.pop_back();
            }
        }
    }*/
    void helper(string st,int open, int close)
   {
    if(open==0 && close==0)
     {
      //  cout<<st<<" ";
        ans.push_back(st);
        return ;
     }
     if(open>0)
     {
        helper(st+"(",open-1,close);
     }
     
         if(open<close)
            helper(st+=')',open,close-1);

      }
    vector<string> generateParenthesis(int n) 
    {
        string s;
       // genearte_parentheses(s,n,n);
        helper("",n,n);
      return ans;    
    }
};