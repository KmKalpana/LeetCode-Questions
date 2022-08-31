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
    int moves=0;
public:
    int coin(TreeNode* root)
    {
        if(root==nullptr)
            return 0;
        int left=coin(root->left);
        int right=coin(root->right);
        moves+= abs(left)+abs(right);
        return left+right+root->val-1;
    }
    int distributeCoins(TreeNode* root)
    {
       if(root==NULL)
           return 0;
        coin(root);
        return moves;
    }
};