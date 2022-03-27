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
     bool symmetric(TreeNode* left, TreeNode* right)
     {
         if(!left && !right)
         {
             return true;
         }
         if(left==nullptr && right!=nullptr)
         {
             return false;
         }
         if(right==nullptr && left!=nullptr)
         {
             return false;
         }
         if(left->val==right->val)
         return symmetric(left->left,right->right) && symmetric(left->right,right->left);
        return false;
     }
    bool isSymmetric(TreeNode* root)
    {
        if(root==NULL)
            return root;
        if(root->left==nullptr && root->right==nullptr)
        {
            return true;
        }
        return symmetric(root->left,root->right);
    }
};