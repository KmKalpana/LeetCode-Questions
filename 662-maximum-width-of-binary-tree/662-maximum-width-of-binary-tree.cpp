class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) 
    {
       queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int ans=1;
        while(!q.empty())
        {
            int size=q.size();
             int fir_ind=q.front().second;
            int last_ind=INT_MIN;
            for(int i=0; i<size; i++)
            {
                pair<TreeNode*,int> p= q.front();
                TreeNode* node=p.first;
                int ind=p.second;
                last_ind=ind;
                q.pop();
                if(node->left)
                    q.push({node->left,(long long)ind*2+1});
                if(node->right)
                    q.push({node->right,(long long)ind*2+2});
            }
     
             ans=max(ans,last_ind-fir_ind+1);
        }
        return ans;
    }
};