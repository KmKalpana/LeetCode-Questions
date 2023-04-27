//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        unordered_set<string>st;
       int check=0, ans=0;
        for(string it: wordList)
        {
            if(it==targetWord)
                check=1;
            st.insert(it);
        }
           if(check==0)
            return 0;
        
        queue<string>q;
        q.push(startWord);
        while(q.size())
        {
         int n=q.size();
         ans++;
         for(int i=0; i<n; i++)
         {
             string s=q.front();
             q.pop();
             for(int i=0; i<s.size(); i++)
             {
                 string temp=s;
                 for(char j='a'; j<='z'; j++)
                 {
                    temp[i]=j;
                    if(s.compare(temp)==0)
                      continue;
                    if(targetWord.compare(temp)==0)
                    {
                        ans++;
                        return ans;
                    }
                    if(st.find(temp)!=st.end())
                    {
                        q.push(temp);
                        st.erase(temp);
                    }
                 }
             }
         }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends