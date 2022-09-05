class Solution {
public:
    bool checkDistances(string s, vector<int>& distance)
    {
       vector<int>pos(26,0);
        for(int i=0; i<s.size(); i++)
        {
            int n=s[i]-'a';
            if(pos[n]>0 && distance[n]!=i-pos[n])
                return false;
            pos[n]=i+1;
        }
        return true;
    }
};