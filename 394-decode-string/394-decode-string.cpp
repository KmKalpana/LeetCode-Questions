class Solution {
public:
     string helper(int &i, string &s)
     {
         int num=0;
          string word="";
         while(i<s.size() && i!=']')
         {
             char ch=s[i];
              if(ch=='[')
              {
                  string curString=helper(++i, s);
                  for(;num>0;  num--)
                      word+=curString;
              }
             else if(ch>='0' && ch<='9')
             {
                 num=num*10 + ch-'0';
             }
             else if(ch==']')
             {
                 return word;
             }
             else 
              {
                 word+=ch;
              }
             i++;
         }
         return word;
     }
    string decodeString(string s)
    {
     int i=0;
      return helper(i,s);
    }
};