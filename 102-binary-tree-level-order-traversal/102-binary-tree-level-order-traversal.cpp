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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
      queue<TreeNode*>q;
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        q.push(root);
        while(!q.empty())
        {
            int c=q.size();
            vector<int>sub;
            for(int i=0; i<c; i++)
            {
                TreeNode* root=q.front();
                q.pop();
                if(root->left)
                {
                    q.push(root->left);
                }
                if(root->right)
                {
                    q.push(root->right);
                }
                sub.push_back(root->val);
            }
            v.push_back(sub);
        }
      return v;
    }
};

