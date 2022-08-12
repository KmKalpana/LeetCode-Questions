class Solution {
public:
    string helper(int left, int right, string s)
    {
        int n=s.size();
        while(left>=0 && right<n && s[left]==s[right])
        {
                left--;
                right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) 
    {
     string longest="";
     int n=s.size();
      //for even
        for(int i=0; i<n;  i++)
        {
            string temp=helper(i,i+1,s);
            if(temp.length()>longest.length())
              longest=temp;
        }
        //for odd
          for(int i=0; i<n; i++)
          {
            string temp=helper(i,i,s);
            if(temp.length()>longest.length())
              longest=temp;
          }
        return longest;
    }
};