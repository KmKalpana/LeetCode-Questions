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
    int findBottomLeftValue(TreeNode* root) 
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            root=q.front();
            q.pop();
            if(root->right)
            {
                q.push(root->right);
            }
            if(root->left)
            {
                q.push(root->left);
            }
        }
       /* vector<int>v;
        q.push(root);
        while(!q.empty())
        {
            int count=q.size();
            for(int i=0; i<count; i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(i==0)
                {
                    v.push_back(node->val);
                }
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
        }*/
        return root->val;
    }
};