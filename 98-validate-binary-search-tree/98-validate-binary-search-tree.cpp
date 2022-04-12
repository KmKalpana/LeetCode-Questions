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
class Solution 
{
public:
    bool isValid(TreeNode* root, int *min, int *max) 
    {
        if(root==nullptr)
            return true;
    
        if(min && root->val<= *min || max && root->val>= *max)
            return false;
        return isValid(root->left,min,&root->val) && isValid(root->right,&root->val,max);
    }
    bool isValidBST(TreeNode* root)
    {
        if(root && !root->left && !root->right)
            return true;
       return isValid(root,NULL,NULL);
    }
};