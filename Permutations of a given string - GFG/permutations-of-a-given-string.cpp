// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	void solve(string s, vector<string>&ans, int index)
	{
	    if(index>=s.size())
	    {
	        ans.push_back(s);
	        return;
	    }
	    for(int j=index; j<s.size(); j++)
	    {
	        swap(s[index],s[j]);
	        solve(s,ans,index+1);
	    }
	    
	}
		vector<string>find_permutation(string S)
		{
		  vector<string>ans;
		  int index=0;
		  string s="";
		  for(auto i: S)
		  {
		     s.push_back(i); 
		  }
		  solve(S,ans,index);
		   sort(ans.begin(),ans.end());
		  return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends