//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string convert(string s, int n) 
    {
        string  t[n];
       int i=0;
       while(i<s.size())
       {
           for(int k=0; (k<n and i<s.size()); k++)
           {
               t[k]+=s[i++];
           }
           if(i==s.size())
            break;
            for(int k=n-2;(k>0 and i<s.size()); k--)
            {
                t[k]+=s[i++];
            }
       }
       string ans="";
       for(int i=0; i<n; i++)
       {
           ans+=t[i];
       }
       return ans;
    }
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.convert(str, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends