class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int beauty=0;
        int i=0, j=0;
        string st=to_string(num);
        while(j<st.length())
        {
           if(j-i+1<k)
               j++;
            else if(j-i+1==k)
            {
                string temp= st.substr(i,k);
                 int n=stoi(temp);
                if(n!=0 && num%n==0)
                    beauty++;
                i++,j++;
            }
        }
        return beauty;
    }
};