class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        if(num1=="0") return num2;
        if(num2=="0") return num1;
        int n=num1.size()>num2.size()?num1.size():num2.size();
           vector<int>res(n+1,0); 
        int i=num1.size()-1, j=num2.size()-1;
        int k=n;
        while(i>=0 && j>=0)
        {
           res[k]+=(num1[i--]-'0')+(num2[j--]-'0');
           res[k-1]=res[k]/10;
           res[k--]=res[k]%10;
           
        }
        while(i>=0)
        {
           res[k]+=(num1[i--]-'0');
            res[k-1]=res[k]/10;
             res[k--]=res[k]%10;
        }
         while(j>=0)
        {
            res[k]+=(num2[j--]-'0');
            res[k-1]=res[k]/10;
            res[k--]=res[k]%10;
        }
        string ans="";
         k=0;
            if(res[k]==0)k++;
        while(k<res.size()) ans+=res[k++]+'0';
        return ans;
    }
};