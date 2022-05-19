class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) 
    {
      unordered_set<string>st;
       int check=0;
        int ans=0;
        for(auto it: wordList)
        {
            cout<<it<<" ";
            if(!endWord.compare(it))
            {
                check=1;
            }
            st.insert(it);
        }
        if(check==0)
        {
            return 0;
        }
        queue<string>q;
        q.push(beginWord);
        while(!q.empty())
        {
            ans+=1;
            int size=q.size();
            for(int x=0; x<size; x++)
            {
                string s=q.front();
                 q.pop();
                for(int i=0; i<s.length(); i++)
                {
                    string temp=s;
                    for(char j='a'; j<='z'; j++)
                    {
                       temp[i]=j;
                        if(s.compare(temp)==0)
                            continue;
                        if(endWord.compare(temp)==0)
                        {
                            ans+=1;
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