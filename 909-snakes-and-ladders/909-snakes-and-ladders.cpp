class Solution {
public:
     void findrowcol(int a, int n,vector<int>&arr)
    {
        int r=n-(a-1)/n-1;
        int c=(a-1)%n;
        if(r%2==n%2)
        {
              arr[0]=r;
            arr[1]=n-1-c;
            return ;
        }
        else
         {
      arr[0]=r;
       arr[1]=c;
         }
        
}
    int snakesAndLadders(vector<vector<int>>& board)
    {
      int n=board.size();
       int ans=0;
      queue<int>q;
        vector<vector<int>>vis(n,vector<int>(n*n,0));
        q.push(1);
        vis[n-1][0]=1;
        while(q.size())
        {
            int size=q.size();
           for(int i=0; i<size; i++)
           {
            int node=q.front();
            q.pop();
            if(node==n*n)
            return ans;
               for(int i=1; i<=6; i++)
               {
                if(node+i>n*n)
                  break;
                   vector<int>arr(2);
                findrowcol(node+i,n,arr);
                 int r=arr[0];
                 int c=arr[1];
                   if(vis[r][c]==1)
                       continue;
                   vis[r][c]=1;
                 if(board[r][c]==-1)
                 {
                     q.push(node+i);
                 }
                   else
                   {
                       q.push(board[r][c]);
                   }
               }
           }
             ans++;
        }
        return -1;
    }
};