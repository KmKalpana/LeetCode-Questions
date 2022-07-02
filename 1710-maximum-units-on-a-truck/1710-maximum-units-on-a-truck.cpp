class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int truckSize) 
    {  
        sort(b.begin(),b.end(),[](auto &a, auto &b){
            return a[1]>b[1];
        });
        int ans=0;
         
        for(int i=0; i<b.size(); i++)
        {
            int count=min(b[i][0],truckSize);
            ans+=count*b[i][1];
            truckSize-=count;
        }
        return ans;
    }
};