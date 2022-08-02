class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
      for(int i=0; i<nums.size(); i++)
      {
          nums[i]=nums[i]%2==1?1:0;
      }
      unordered_map<int,int>mp;
       int ans=0;
       int  j=0; 
       int psum=0;
       while(j<nums.size())
       {
           psum+=nums[j];
           if(psum==k)
           {
               ans++;
           }
           if(mp.find(psum-k)!=mp.end())
           {
               ans+=mp[psum-k];
           }
           mp[psum]++;
           j++;
       }
       return ans ;
    }
};