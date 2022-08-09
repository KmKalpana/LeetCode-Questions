class Solution {
public:
    string convert(string s, int numRows) 
    {
        if(numRows==1)
            return s;
        string st[numRows];
        int i=0,j=0;
       while(i<s.size())
       {
           if(i==s.size())
               break;
           for(int k=j; (k<numRows && i<s.size()); k++)
           {
               st[k]+=s[i];
               i++;
           }
           
           if(i==s.size())
               break;
           for(int k=numRows-2; (k>0 && i<s.size()); k--)
           {
               st[k]+=s[i];
               i++;
           }
           j=0;
       }
        string temp="";
        for(int i=0;i<numRows; i++)
        {
            temp.append(st[i]);
        }
        return temp;
    }
};