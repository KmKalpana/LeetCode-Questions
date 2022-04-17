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
    TreeNode* current, *newnode;
    TreeNode* increasingBST(TreeNode* root) 
    {
          if(root==NULL)
          {
              return NULL;
          }
          increasingBST(root->left);
           if(newnode==NULL)
           {
               newnode=new TreeNode(root->val);
               current=newnode;
           }
            else
            {
                current->right=new TreeNode(root->val);
            current=current->right;
            }
         increasingBST(root->right);
        return newnode;
    }
};