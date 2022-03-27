/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        int small=min(p->val,q->val);
        int large=max(p->val,q->val);
        while(root!=NULL)
        {
            if(large<root->val)
                root=root->left;
            else if(small>root->val)
                root=root->right;
            else
                return root;
        }
        return nullptr;
      /*if(root->val>p->val && root->val>q->val)
      {
        return lowestCommonAncestor(root->left,p,q);
        }
      if(root->val<p->val && root->val<q->val)
      {
       return lowestCommonAncestor(root->right,p,q);
       }
      return root;*/
       
    }
};