class Solution {
public:
    void helper(vector<string>&st,string digits,string mp[], string s, int index)
    {
        if(index==digits.length())
        {
            st.push_back(s);
            return ;
        }
        int num=digits[index]-'0';
        string value=mp[num];
        for(int i=0; i<value.length(); i++)
        {
            s.push_back(value[i]);
            helper(st,digits,mp,s,index+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        vector<string>st;
        if(digits.empty())
        {
            return st;
        }
        string s;
        string mp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
         helper(st,digits,mp,s,0);
        return st;
    }
};