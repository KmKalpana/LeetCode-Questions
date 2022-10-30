class Solution {
public:
    int maxDepth(string s) 
    {
      int res=0;
      int dep=0;
        for(auto it: s)
        {
            if(it=='(')
                dep++;
            else if(it==')')
                dep--;
          res=max(res,dep);
        }
        return res;
    }
};