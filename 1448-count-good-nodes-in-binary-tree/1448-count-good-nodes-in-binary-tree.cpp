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
    void helper(TreeNode* root, int &count, int prev)
    {
        if(root==nullptr)
        {
            return ;
        }
        if(prev<=root->val)
        {
            count+=1;
            prev=root->val;
        }
        helper(root->left,count,prev);
        helper(root->right,count,prev);
    }
    int goodNodes(TreeNode* root) 
    {
      int count=0;
        if( root!=NULL && root->left==NULL && root->right==NULL)
            return 1;
        int prev=INT_MIN;
       helper(root,count,prev);
        return count;
        
    }
};