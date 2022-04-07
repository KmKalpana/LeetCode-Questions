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
    void inorder(TreeNode* root, TreeNode* node, int &res)
    {
        if(root)
        {
             inorder(root->right,node,res);
             root->val=res+root->val;
            res=root->val;
             inorder(root->left,node,res);
            
        }
    }
    TreeNode* bstToGst(TreeNode* root)
    {
         int res=0;
        inorder(root,root,res);
        return root;
    }
};