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
    int sum=0;
  int  helper(TreeNode* root)
    {
        if(root==nullptr)
            return 0;
       
             int ls=helper(root->left);
             int rs=helper(root->right);
             sum+=abs(ls-rs);
            return ls+rs+root->val;
    }
    int findTilt(TreeNode* root) 
    {
        if(root==nullptr)
        {
            return 0;
        }
             helper(root);
             return sum;
    }
};