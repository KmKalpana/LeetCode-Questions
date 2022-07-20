class Solution {
public:
    bool isVowel(char w)
    {
        return (w=='a' || w=='e' || w=='i' || w=='o' || w=='u');
    }
    int countVowelSubstrings(string word)
    {
        int count=0;
        int n=word.size();
        unordered_map<char,int>mp;
        for(int i=0; i<n; i++)
        {
            mp.clear();
            for(int j=i; j<n && isVowel(word[j]); j++)
            {
                mp[word[j]]++;
                if(mp.size()==5)
                    count++;
            }
        }
        return count;
    }
};