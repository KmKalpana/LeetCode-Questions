class Solution {
public:
    bool isAnagram(string s, string t)
    {
     if(s.length()!=t.length())
         return false;
       /*  if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> counts;
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for (auto count : counts)
            if (count.second) return false;
        return true;*/
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};