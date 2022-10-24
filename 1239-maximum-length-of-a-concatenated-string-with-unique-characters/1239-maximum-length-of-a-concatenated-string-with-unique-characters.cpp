class Solution {
public:
    int m[26];
    int len=0;
    void helper(vector<string>&arr,int i, int n)
    {
        int res=0;
        for(int i=0; i<26; i++)
        {
            if(m[i]>1)
                return ;
            if(m[i]==1)
                res++;
        }
        len=max(res,len);
        for(int j=i; j<n; j++)
        {
            for(auto it: arr[j])
                m[it-'a']++;
            helper(arr,j+1,n);
            for(auto it: arr[j])
                m[it-'a']--;
        }
    }
    int maxLength(vector<string>& arr) 
    {
      helper(arr,0,arr.size());   
      return len;
    }
};