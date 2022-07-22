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
    int inorder(TreeNode* root, int value)
    {
        if(!root)
            return -1;
        cout<<root->val<<" ";
        if(root->val!=value)
        {
           return root->val;
        }
        int left=inorder(root->left, value);
        int right=inorder(root->right, value);
        if(left==-1)
            return right;
        if(right==-1)
            return left;
       return min(left, right);
        
    }
    int findSecondMinimumValue(TreeNode* root) 
    {
        if(root==NULL || (!root->left) && (!root->right))
            return -1;
          int x = inorder(root,root->val);
        return x==root->val?-1:x;
    }
};