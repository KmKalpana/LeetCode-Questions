class Solution {
public:
    string compare(string st)
    {
        int len=st.length();
        int backspace=0;
        string ans="";
        while(len>=0)
        {
            if(st[len]=='#')
            {
                backspace++;
            }
            else 
            {
                if(backspace>0)
                {
                    backspace--;
                }
                else
                {
                ans+=st[len];
                }
            }
            len--;
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) 
    {
       string ans1=compare(s);
        string ans2=compare(t);
        return (ans1==ans2)?true:false;
    }
    
};