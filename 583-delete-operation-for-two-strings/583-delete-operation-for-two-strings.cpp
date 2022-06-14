class Solution {
public:
    int minDistance(string s, string t)
    {
        int n=s.length();
        int m=t.length();
    vector<int>prev(m+1,0),curi(m+1,0);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(s[i-1]==t[j-1])
            {
                curi[j]=1+prev[j-1];
            }
            else
                curi[j]=max(prev[j],curi[j-1]);
        }
        prev=curi;
    }   
        int l=prev[m];
        return (n+m-2*l);
    }
};