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
    int sum=0,res=0;
    void add(TreeNode* root)
    {
      if(root==nullptr)  return;
        
        res=res*10+root->val;
        if(!root->left && !root->right)
        {
            sum+=res;
        }
        add(root->left);
        add(root->right);
        res=res/10;
        
    }
    
    int sumNumbers(TreeNode* root) 
    {
         add(root);
        return sum;
    }
};