//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{   
    vector<string>ans;
    public:
    void helper(string st, int open, int close)
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
    vector<string> AllParenthesis(int n) 
    {
        string temp;
        helper(temp,n,n);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends