class Solution {
public:
    /*
    TC=O(n^3)
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i+1; j++)
            {
                for(int k=0; k<j+1; k++)
                {
                    if(rating[i]<rating[j] && rating[j]<rating[k])
                    {
                        ans++;
                    }
                    if(rating[i]>rating[j] && rating[j]>rating[k])
                    {
                        ans++;
                    }
                }
            }
        }*/
    int numTeams(vector<int>& rating) 
    {
        int ans=0;
        int n=rating.size();
        for(int i=1; i<n; i++)
        {
            int IL=0, DL=0, IR=0, DR=0;
            for(int j=i-1; j>=0; j--)
            {
               if(rating[j]<rating[i])
               {
                   IL++;
               }
                else
                {
                    DL++;
                }
            }
              for(int j=i+1; j<n; j++)
            {
               if(rating[j]>rating[i])
               {
                   IR++;
               }
                else
                {
                    DR++;
                }
            }
           cout<<IL<<" "<<DL<<" "<<IR<<" "<<DR<<" "<<endl;
            ans+=(IL*IR)+(DL*DR);
        }
        return ans;
    }
};