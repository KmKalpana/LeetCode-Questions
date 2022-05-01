class Solution {
public:
    int find(int i, vector<int>&parent)
    {
        return parent[i]==i ? i : find(parent[i],parent);
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
      int n=isConnected.size();
        vector<int>parent(n,0);
        for(int i=0; i<n; i++)
        {
            parent[i]=i;
        }
        int count=n;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(isConnected[i][j])
                {
                    int l1=find(i,parent);
                    int l2=find(j,parent);
                    if(l1!=l2)
                    {
                      parent[l2]=l1;
                        count--;
                    }
                }
            }
        }
        return count;
    }
};