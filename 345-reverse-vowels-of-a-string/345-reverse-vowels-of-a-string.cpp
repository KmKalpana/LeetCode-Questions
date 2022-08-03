class Solution {
public:
    string reverseVowels(string s) 
    {
        string temp;
        for(auto it: s)
        {
            if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u' ||it=='A' || it=='E' || it=='I' || it=='O' || it=='U')
                temp+=it;
        }
        int n=s.size();
        int m=temp.size()-1;
        for(int it=0; it<n; it++)
        {
            if(s[it]=='a' || s[it]=='e' || s[it]=='i' || s[it]=='o' || s[it]=='u' || s[it]=='A' || s[it]=='E' || s[it]=='O' || s[it]=='U' || s[it]== 'I')
            {
                s[it]=temp[m--];
            }
        }
        return s;
    }
};