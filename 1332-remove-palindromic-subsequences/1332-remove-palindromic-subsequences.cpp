class Solution {
public:
    bool palindrome(string &s)
    {
        int n=s.length();
        int i=0;
        while(i<n/2)
        {
            if(s[i]!=s[n-1-i])
                return false;
            i++;
        }
        return true;
    }
    int removePalindromeSub(string s) 
    {
       if(palindrome(s))
       {
           return 1;
       }
       return 2;
    }
};