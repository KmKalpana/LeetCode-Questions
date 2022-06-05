class Solution {
public:
    bool check(string &s1, string &s2)
 {
     if(s1.size()!=s2.size()+1)
     {
         return false;
     }
     int first=0, second=0;
     while(first<s1.size())
     {
         if(s1[first]==s2[second] && second<s2.size())
         {
             first++,second++;
         }
         else
         {
             first++;
         }
     }
     if(first==s1.size() && second==s2.size())
         return true;
     return false;
 }
    static bool comp(string &a, string &b)
    {
    return a.length()<b.length();
    }
    int longestStrChain(vector<string>& arr) {
         int n=arr.size();
     sort(arr.begin(), arr.end(),comp);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    vector<int>dp(n,1);
    int maxi=0;
    for(int ind=0; ind<n; ind++)
    {
        for(int prev=0; prev<ind; prev++)
        {
            if(check(arr[ind],arr[prev]) && dp[prev]+1>dp[ind])
            {
                dp[ind]=dp[prev]+1;
            }
        }
        maxi=max(maxi,dp[ind]);
    }
    return maxi;

        
    }
};