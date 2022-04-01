class Solution {
public:
    void reverseString(vector<char>&s)
    {
         if(s.size()==0)
             return ;
          char temp=s[0];
          s.erase(s.begin());
         reverseString(s);
         s.push_back(temp);
        /*int n=s.size();
       for(int i=0; i<n/2; i++)
       {
           int temp=s[i];
           s[i]=s[n-i-1];
           s[n-i-1]=temp;
       }*/
    }
};