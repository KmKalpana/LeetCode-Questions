class Solution {
public:
    string reverseWords(string s) 
    {
        string temp;
        int n=s.length();
        string ans;
       for(int i=n-1; i>=0; i--)
       {
           int j=i;
           string temp;
           while(j>=0 && s[j]!=' ')
           {
              temp+=s[j];
              j--;
           }
           i=j;
           if(!temp.empty())
           {
           reverse(temp.begin(),temp.end());
           ans+=temp;
           ans+=' ';
           }
       }
        return ans.substr(0,ans.length()-1);
    }
};