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
    vector<vector<int>> v;
    void sumpath(TreeNode* root, int targetSum,vector<int>p)
    {
     if(root==nullptr)
         return ;
      targetSum-=root->val;
        p.push_back(root->val);
        if(targetSum==0 && !root->left && !root->right)
        {
            v.push_back(p);
        }
        sumpath(root->left,targetSum,p);
        sumpath(root->right,targetSum,p);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
       if(root==nullptr)
           return v;
        vector<int>p;
        sumpath(root,targetSum,p);
        return v;
    }
};