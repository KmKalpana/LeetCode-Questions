//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        for(int i=0; i<x.size(); i++)
        {
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
                s.push(x[i]);
              else if(s.size() && x[i]==']' && s.top()!='[')
                  return 0;
               else if(s.size() && x[i]=='}' && s.top()!='{')
                  return 0;
              else if(s.size() && x[i]==')' && s.top()!='(')
                   return 0;
                else if(s.size()==0 && (x[i]==')' || x[i]=='}' || x[i]==']'))
                  return 0;
                else
                s.pop();
        }
        //cout<<s.size();
        return s.size()==0?1:0;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends