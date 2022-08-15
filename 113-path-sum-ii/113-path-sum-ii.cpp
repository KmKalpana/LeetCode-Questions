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
    vector<vector<int>>ans;
 void helper(TreeNode* root, int target,vector<int>temp)
 {
     if(root==NULL)
     return ;
     temp.push_back(root->val);
     if(target==root->val && root->left==NULL && root->right==NULL)
     {
         ans.push_back(temp);
       
          return ;
     }
     helper(root->left, target-root->val, temp);
     helper(root->right,target-root->val,temp);
     return ;
 }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
      vector<int>temp;
    helper(root,targetSum,temp);
    return ans;
    }
};