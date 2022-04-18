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
    void find(TreeNode* root, int &count , int &k)
    {
        if(!root)
            return;
        find(root->left,count,k);
          if(k==0)
          { return;
          }
          count=root->val;
        find(root->right,count,--k);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        int count;
        find(root,count,k);
        return count;
    }
};