class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
      int n=arr.size();
        unordered_map<int,int>mp;
      for(int i=0; i<n; i++)
      {
          if(mp.find(arr[i]*2)!=mp.end())
          {
              return true;
          }
          if(arr[i]%2==0 && mp.find(arr[i]/2)!=mp.end())
          {
              return true;
          }
          mp[arr[i]]++;
      }
      /*  for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
            for(int j=0; j<n; j++)
            {
                if((arr[j]*2==arr[i] || arr[i]*2==arr[j]) && i!=j)
                {
                    return true;
                }
            }
            }
        }*/
        return false;
    }
};