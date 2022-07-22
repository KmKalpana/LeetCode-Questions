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
    int find(TreeNode* root,int &k)
    {
        if(!root)
            return -1;
        int x=find(root->left,k);
        return !k?x: !--k?root->val : find(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        int counter=0;
        return find(root,k);
    }
};