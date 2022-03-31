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
    vector<string>v;
    void path(TreeNode* root,string s)
    {
        if(root==nullptr)
        {
            return ;
        }
        if(!root->left && !root->right)
        {
            s=s+to_string(root->val);
            v.push_back(s);
        }
        s=s+to_string(root->val)+"->";
        path(root->left,s);
        path(root->right,s);
        return ;
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
      if(root==nullptr)
          return v;
     path(root,"");
        return v;
    }
};