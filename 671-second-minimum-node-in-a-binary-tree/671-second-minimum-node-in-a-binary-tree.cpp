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
     set<int>s;
    void inorder(TreeNode* root)
    {
        if(!root)
            return ;
        inorder(root->left);
        s.insert(root->val);
        inorder(root->right);
        
    }
    int findSecondMinimumValue(TreeNode* root) 
    {
       if(!root->left && !root->right)
           return -1;
          inorder(root);
        if(s.size()>=2)
        {
           int x=*next(s.begin(),1);
            return x;
        }
        return -1;
    }
};