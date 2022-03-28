/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* node) 
    {
        vector<vector<int>>zig;
        if(node==NULL)
        {
            return zig;
        }
        queue<TreeNode*>q;
        q.push(node);
        bool res=true;
        while(!q.empty())
        {
           int size=q.size();
            vector<int>v(size);
            for(int i=0; i<size; i++)
            {
                TreeNode* root=q.front();
                 q.pop();
                int index=(res)? i :(size-i-1);
                 v[index]=root->val;   
                if(root->left)
                {
                    q.push(root->left);
                }
                if(root->right)
                {
                q.push(root->right);
                }
            }
            zig.push_back(v);
            res=!res;
          }
          return zig;
    }
};